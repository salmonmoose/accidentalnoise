#ifndef MODULE_BASE_H
#define MODULE_BASE_H

#include <vector>
#include <functional>
#include <map>

namespace anl
{
	class CImplicitModuleBase;
	class CCellularGenerator;

	template<class T>
	class ModuleFunction
	{
	public:
		typedef std::function<void(T)> set_function;
		typedef std::function<T()> get_function;

        bool create(std::string const& key, set_function const& input, get_function const& output) {
        	setFunctions[key] = input;
            getFunctions[key] = output;
        	return true;
        }

        bool set(std::string key, T value) {
            auto fit = setFunctions.find(key);

            if (fit == setFunctions.end()) {
                return false;
            } else {
                fit->second(value);
                return true;
            }
        }

        T get(std::string key) {
            auto fit = getFunctions.find(key);
            if (fit == getFunctions.end()) return 0;

            return fit->second();
        }

        std::vector<std::string> list() {
            std::vector<std::string> key_list;

            for(typename std::map<std::string, set_function>::iterator it = setFunctions.begin(); it != setFunctions.end(); ++it)
            {
                key_list.push_back(it->first);
            }

            return key_list;
        }

    private:
    	std::map<std::string, set_function> setFunctions;
    	std::map<std::string, get_function> getFunctions;
	};

	class ModuleBase
	{
	public:
        ModuleFunction<double>  				 DoubleInputs;
        ModuleFunction<int> 					 IntInputs;
        ModuleFunction<anl::CImplicitModuleBase *> NoiseInputs;
        ModuleFunction<anl::CCellularGenerator *>  CellgenInputs;

        void setName(std::string nName) {
            name = nName;
        }

        void setDefaultNoise(CImplicitModuleBase * n) { mCImplicitModuleBaseDefault = n; }
        void setDefaultCellgen(CCellularGenerator * n) { mCCellgenDefault = n; }

    protected:
        CImplicitModuleBase * mCImplicitModuleBaseDefault;
        CCellularGenerator * mCCellgenDefault;

    private:
        std::string name;
	};


}

#endif
