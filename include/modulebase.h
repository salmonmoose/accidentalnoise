#ifndef MODULE_BASE_H
#define MODULE_BASE_H

#include <vector>
#include <functional>
#include <map>

namespace anl
{
	class CImplicitModuleBase;
	class CCellularGenerator;

	class ModuleBase
	{
	public:
        typedef std::function<void(int)> int_set_function;
        typedef std::function<void(double)> double_set_function;
        typedef std::function<void(anl::CImplicitModuleBase*)> noise_set_function;
        typedef std::function<void(anl::CCellularGenerator*)> cellgen_set_function;

        typedef std::function<int()> int_get_function;
        typedef std::function<double()> double_get_function;
        typedef std::function<anl::CImplicitModuleBase*()> noise_get_function;
        typedef std::function<anl::CCellularGenerator*()> cellgen_get_function;

		//TODO: these could all realistically be templated;
        bool registerDoubleInput(std::string const& key, double_set_function const& input, double_get_function const& output) {
            doubleSetFunctions[key] = input;
            doubleGetFunctions[key] = output;
            return true;
        }

        bool registerIntInput(std::string const& key, int_set_function const& input, int_get_function const& output) {
            intSetFunctions[key] = input;
            intGetFunctions[key] = output;
            return true;
        }

        bool registerNoiseInput(std::string const& key, noise_set_function const& input, noise_get_function const& output) {
            noiseSetFunctions[key] = input;
            noiseGetFunctions[key] = output;
            return true;
        }

        bool registerCellgenInput(std::string const& key, cellgen_set_function const& input, cellgen_get_function const& output) {
            cellgenSetFunctions[key] = input;
            cellgenGetFunctions[key] = output;
            return true;
        }

        void setName(std::string nName) {
            name = nName;
        }

        void setDefaultNoise(CImplicitModuleBase * n) { mCImplicitModuleBaseDefault = n; }
        void setDefaultCellgen(CCellularGenerator * n) { mCCellgenDefault = n; }

        std::string getName() {
            return name;
        }

        bool setDoubleInput(std::string key, double value) {
            auto fit = doubleSetFunctions.find(key);

            if (fit == doubleSetFunctions.end()) {
                return false;
            } else {
                fit->second(value);
                return true;
            }
        }

        double getDoubleInput(std::string key) {
            auto fit = doubleGetFunctions.find(key);
            if (fit == doubleGetFunctions.end()) return 0;

            return fit->second();
        }

        bool setIntInput(std::string key, int value) {
            auto fit = intSetFunctions.find(key);

            if (fit == intSetFunctions.end()) {
                return false;
            } else {
                fit->second(value);
                return true;
            }
        }

        int getIntInput(std::string key) {
            auto fit = intGetFunctions.find(key);
            if (fit == intGetFunctions.end()) return 0;

            return fit->second();
        }

        bool setNoiseInput(std::string key, anl::CImplicitModuleBase* value) {
            auto fit = noiseSetFunctions.find(key);

            if(fit == noiseSetFunctions.end()) {
                return false;
            } else {
                fit->second(value);
                return true;
            }
        }

        anl::CImplicitModuleBase * getNoiseInput(std::string key) {
            auto fit = noiseGetFunctions.find(key);
            if (fit == noiseGetFunctions.end()) return 0;

            return fit->second();
        }

        bool setCellgenInput(std::string key, anl::CCellularGenerator* value) {
            auto fit = cellgenSetFunctions.find(key);

            if (fit == cellgenSetFunctions.end()) {
                return false;
            } else {
                fit->second(value);
                return true;
            }
        }

        anl::CCellularGenerator *getCellgenInput(std::string key) {
            auto fit = cellgenGetFunctions.find(key);

            if (fit == cellgenGetFunctions.end()) {
                return 0;
            } else {
                return fit->second();
            }
        }

        std::vector<std::string> getDoubleInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, double_set_function>::iterator it = doubleSetFunctions.begin(); it != doubleSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getIntInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, int_set_function>::iterator it = intSetFunctions.begin(); it != intSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getNoiseInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, noise_set_function>::iterator it = noiseSetFunctions.begin(); it != noiseSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

        std::vector<std::string> getCellgenInputs() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, cellgen_set_function>::iterator it = cellgenSetFunctions.begin(); it != cellgenSetFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

    protected:
        CImplicitModuleBase * mCImplicitModuleBaseDefault;
        CCellularGenerator * mCCellgenDefault;

    private:
        std::string name;

        std::map<std::string, double_set_function> doubleSetFunctions;
        std::map<std::string, int_set_function> intSetFunctions;
        std::map<std::string, noise_set_function> noiseSetFunctions;
        std::map<std::string, cellgen_set_function> cellgenSetFunctions;

        std::map<std::string, double_get_function> doubleGetFunctions;
        std::map<std::string, int_get_function> intGetFunctions;
        std::map<std::string, noise_get_function> noiseGetFunctions;
        std::map<std::string, cellgen_get_function> cellgenGetFunctions;
	};
}

#endif
