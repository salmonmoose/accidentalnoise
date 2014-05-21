#ifndef IMPLICIT_SEQUENCE_H
#define IMPLICIT_SEQUENCE_H

#include <iostream>
#include <memory>
#include <vector>
#include "anl.h"
#include "factory.h"

#include "implicitmodulebase.h"

namespace anl
{
	enum EInputTypes
	{
		INT,
		ENUM,
		DOUBLE,
		NOISE,
		CELLGEN
	};

	class CImplicitSequence : public CImplicitModuleBase
	{
		private:
		public:
			CImplicitSequence();
			~CImplicitSequence(){};

			anl::CImplicitModuleBase * tempNoise;
			anl::CImplicitModuleBase * valueNoise;
			anl::CImplicitModuleBase * render;
			anl::CImplicitModuleBase * mCImplicitModuleBaseDefault;

			anl::CCellularGenerator * tempCellgen;
			anl::CCellularGenerator * valueCellgen;
			anl::CCellularGenerator * mCellgenDefault;

			generic_factory<std::string, anl::CImplicitModuleBase> * mCImplicitModuleFactory;
			generic_factory<std::string, anl::CCellularGenerator> * mCImplicitCellularGeneratorFactory;


			static std::map<std::string, EInputTypes> InputMap;
			static std::map<std::string, unsigned int> ENUMMap;

			bool renderNode;

			void RegisterTypes();
			void AddLayer(std::string type, std::string name);
			void AddLayer(std::string type);

			void AddCellGenerator(std::string);

			bool SetAttribute(std::string layer, std::string type, std::string attribute, std::string value);
			bool SetAttribute(anl::CImplicitModuleBase *node, EInputTypes type, std::string attribute, std::string value);

			std::string GetAttribute(std::string node, std::string type, std::string attribute);

			double GetDoubleAttribute(anl::CImplicitModuleBase *node, std::string attribute);
			int GetIntAttribute(anl::CImplicitModuleBase *node, std::string attribute);
			anl::CImplicitModuleBase *GetNoiseAttribute(anl::CImplicitModuleBase *node, std::string attribute);

			void SetRenderNode(std::string layer);

    		std::vector<std::string> GetLayerOptions();
    		std::vector<std::string> GetLayerDoubleInputs(std::string node);
    		std::vector<std::string> GetLayerIntInputs(std::string node);
    		std::vector<std::string> GetLayerNoiseInputs(std::string node);

			double get(double x, double y);
			double get(double x, double y, double z);
			double get(double x, double y, double z, double w);
			double get(double x, double y, double z, double w, double u, double v);

			double get(std::string node, double x, double y);
			double get(std::string node, double x, double y, double z);
			double get(std::string node, double x, double y, double z, double w);
			double get(std::string node, double x, double y, double z, double w, double u, double v);

			double get(anl::CImplicitModuleBase *node, double x, double y);
			double get(anl::CImplicitModuleBase *node, double x, double y, double z);
			double get(anl::CImplicitModuleBase *node, double x, double y, double z, double w);
			double get(anl::CImplicitModuleBase *node, double x, double y, double z, double w, double u, double v);

			std::map<std::string, std::unique_ptr<CImplicitModuleBase>> noiseTree;
			std::map<std::string, std::unique_ptr<CImplicitModuleBase>>::iterator noiseTreeIterator;

			std::map<std::string, std::unique_ptr<CCellularGenerator>> cellgenTree;
			std::map<std::string, std::unique_ptr<CCellularGenerator>>::iterator cellgenTreeIterator;
	};
};

#endif