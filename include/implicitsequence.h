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

	class CImplicitSequence
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
			anl::CCellularGenerator * mCCellgenDefault;

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

			std::string getAttribute(std::string node, std::string type, std::string attribute);

			double getDoubleAttribute(anl::CImplicitModuleBase *node, std::string attribute);
			int getIntAttribute(anl::CImplicitModuleBase *node, std::string attribute);
			anl::CImplicitModuleBase *getNoiseAttribute(anl::CImplicitModuleBase *node, std::string attribute);

			void SetRenderNode(std::string layer);

    		std::vector<std::string> getLayerOptions();
    		std::vector<std::string> getLayerDoubleInputs(std::string node);
    		std::vector<std::string> getLayerIntInputs(std::string node);
    		std::vector<std::string> getLayerNoiseInputs(std::string node);

			double getValue(double x, double y);
			double getValue(double x, double y, double z);
			double getValue(double x, double y, double z, double w);
			double getValue(double x, double y, double z, double w, double u, double v);

			double getValue(std::string node, double x, double y);
			double getValue(std::string node, double x, double y, double z);
			double getValue(std::string node, double x, double y, double z, double w);
			double getValue(std::string node, double x, double y, double z, double w, double u, double v);

			double getValue(anl::CImplicitModuleBase *node, double x, double y);
			double getValue(anl::CImplicitModuleBase *node, double x, double y, double z);
			double getValue(anl::CImplicitModuleBase *node, double x, double y, double z, double w);
			double getValue(anl::CImplicitModuleBase *node, double x, double y, double z, double w, double u, double v);

			std::map<std::string, std::unique_ptr<CImplicitModuleBase>> noiseTree;
			std::map<std::string, std::unique_ptr<CImplicitModuleBase>>::iterator noiseTreeIterator;

			std::map<std::string, std::unique_ptr<CCellularGenerator>> cellgenTree;
			std::map<std::string, std::unique_ptr<CCellularGenerator>>::iterator cellgenTreeIterator;
	};
};

#endif