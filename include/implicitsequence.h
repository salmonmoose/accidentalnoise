#ifndef IMPLICIT_SEQUENCE_H
#define IMPLICIT_SEQUENCE_H

#include <iostream>
#include <memory>
#include "anl.h"

#include "implicitmodulebase.h"

namespace anl
{
	enum EInputTypes
	{
		INT,
		ENUM,
		DOUBLE,
		NOISE
	};

	class CImplicitSequence : public CImplicitModuleBase
	{
		private:
		public:
			CImplicitSequence();
			~CImplicitSequence(){};

			anl::CImplicitModuleBase * tmp;
			anl::CImplicitModuleBase * value;
			anl::CImplicitModuleBase * render;

			static std::map<std::string, EInputTypes> InputMap;
			static std::map<std::string, unsigned int> ENUMMap;

			bool renderNode;

			void RegisterTypes();
			void AddLayer(std::string type, std::string name);
			void SetAttribute(std::string layer, std::string attribute, std::string type, std::string value);
			void SetRenderNode(std::string layer);

			double get(double x, double y);
			double get(double x, double y, double z);
			double get(double x, double y, double z, double w);
			double get(double x, double y, double z, double w, double u, double v);

			std::map<std::string, std::unique_ptr<CImplicitModuleBase>> noiseTree;
			std::map<std::string, std::unique_ptr<CImplicitModuleBase>>::iterator noiseTreeIterator;

			std::map<std::string, CCellularGenerator> cellularTree;
	};
};

#endif