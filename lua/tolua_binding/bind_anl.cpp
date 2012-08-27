/*
** Lua binding: bind_anl
** Generated automatically by tolua++-1.0.92 on 07/21/11 10:26:14.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_anl_open (lua_State* tolua_S);

#include "anl.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_anl__CRGBACompositeChannels (lua_State* tolua_S)
{
 anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitExtractRGBAChannel (lua_State* tolua_S)
{
 anl::CImplicitExtractRGBAChannel* self = (anl::CImplicitExtractRGBAChannel*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitScaleOffset (lua_State* tolua_S)
{
 anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBAConstant (lua_State* tolua_S)
{
 anl::CRGBAConstant* self = (anl::CRGBAConstant*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBABlendOps (lua_State* tolua_S)
{
 anl::CRGBABlendOps* self = (anl::CRGBABlendOps*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitBasisFunction (lua_State* tolua_S)
{
 anl::CImplicitBasisFunction* self = (anl::CImplicitBasisFunction*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitCache (lua_State* tolua_S)
{
 anl::CImplicitCache* self = (anl::CImplicitCache*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitRGBADotProduct (lua_State* tolua_S)
{
 anl::CImplicitRGBADotProduct* self = (anl::CImplicitRGBADotProduct*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_CArray2Dd (lua_State* tolua_S)
{
 CArray2Dd* self = (CArray2Dd*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitCos (lua_State* tolua_S)
{
 anl::CImplicitCos* self = (anl::CImplicitCos*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitSelect (lua_State* tolua_S)
{
 anl::CImplicitSelect* self = (anl::CImplicitSelect*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitScaleDomain (lua_State* tolua_S)
{
 anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitFloor (lua_State* tolua_S)
{
 anl::CImplicitFloor* self = (anl::CImplicitFloor*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitClamp (lua_State* tolua_S)
{
 anl::CImplicitClamp* self = (anl::CImplicitClamp*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__SRGBA (lua_State* tolua_S)
{
 anl::SRGBA* self = (anl::SRGBA*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__SMappingRanges (lua_State* tolua_S)
{
 anl::SMappingRanges* self = (anl::SMappingRanges*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitBlend (lua_State* tolua_S)
{
 anl::CImplicitBlend* self = (anl::CImplicitBlend*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitFractal (lua_State* tolua_S)
{
 anl::CImplicitFractal* self = (anl::CImplicitFractal*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitSin (lua_State* tolua_S)
{
 anl::CImplicitSin* self = (anl::CImplicitSin*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitPow (lua_State* tolua_S)
{
 anl::CImplicitPow* self = (anl::CImplicitPow*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitCellular (lua_State* tolua_S)
{
 anl::CImplicitCellular* self = (anl::CImplicitCellular*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBASelect (lua_State* tolua_S)
{
 anl::CRGBASelect* self = (anl::CRGBASelect*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBANormalize (lua_State* tolua_S)
{
 anl::CRGBANormalize* self = (anl::CRGBANormalize*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitConstant (lua_State* tolua_S)
{
 anl::CImplicitConstant* self = (anl::CImplicitConstant*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitAutoCorrect (lua_State* tolua_S)
{
 anl::CImplicitAutoCorrect* self = (anl::CImplicitAutoCorrect*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitGain (lua_State* tolua_S)
{
 anl::CImplicitGain* self = (anl::CImplicitGain*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_CArray3Drgba (lua_State* tolua_S)
{
 CArray3Drgba* self = (CArray3Drgba*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitCombiner (lua_State* tolua_S)
{
 anl::CImplicitCombiner* self = (anl::CImplicitCombiner*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitFunctionGradient (lua_State* tolua_S)
{
 anl::CImplicitFunctionGradient* self = (anl::CImplicitFunctionGradient*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__LCG (lua_State* tolua_S)
{
 anl::LCG* self = (anl::LCG*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_CArray2Drgba (lua_State* tolua_S)
{
 CArray2Drgba* self = (CArray2Drgba*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBARotateColor (lua_State* tolua_S)
{
 anl::CRGBARotateColor* self = (anl::CRGBARotateColor*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBAHSVToRGBA (lua_State* tolua_S)
{
 anl::CRGBAHSVToRGBA* self = (anl::CRGBAHSVToRGBA*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitSphere (lua_State* tolua_S)
{
 anl::CImplicitSphere* self = (anl::CImplicitSphere*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitBias (lua_State* tolua_S)
{
 anl::CImplicitBias* self = (anl::CImplicitBias*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitTranslateDomain (lua_State* tolua_S)
{
 anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitTiers (lua_State* tolua_S)
{
 anl::CImplicitTiers* self = (anl::CImplicitTiers*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBABlend (lua_State* tolua_S)
{
 anl::CRGBABlend* self = (anl::CRGBABlend*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_CArray3Dd (lua_State* tolua_S)
{
 CArray3Dd* self = (CArray3Dd*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitRotateDomain (lua_State* tolua_S)
{
 anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CCellularGenerator (lua_State* tolua_S)
{
 anl::CCellularGenerator* self = (anl::CCellularGenerator*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitBrightContrast (lua_State* tolua_S)
{
 anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__KISS (lua_State* tolua_S)
{
 anl::KISS* self = (anl::KISS*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__MWC256 (lua_State* tolua_S)
{
 anl::MWC256* self = (anl::MWC256*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CMWC4096 (lua_State* tolua_S)
{
 anl::CMWC4096* self = (anl::CMWC4096*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CImplicitGradient (lua_State* tolua_S)
{
 anl::CImplicitGradient* self = (anl::CImplicitGradient*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__Xorshift (lua_State* tolua_S)
{
 anl::Xorshift* self = (anl::Xorshift*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBARGBAToHSV (lua_State* tolua_S)
{
 anl::CRGBARGBAToHSV* self = (anl::CRGBARGBAToHSV*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_anl__CRGBAImplicitGrayscale (lua_State* tolua_S)
{
 anl::CRGBAImplicitGrayscale* self = (anl::CRGBAImplicitGrayscale*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"anl::CRGBACompositeChannels");
 tolua_usertype(tolua_S,"anl::CImplicitFunctionGradient");
 tolua_usertype(tolua_S,"anl::CImplicitScaleOffset");
 tolua_usertype(tolua_S,"anl::CRGBAConstant");
 tolua_usertype(tolua_S,"anl::CRGBABlendOps");
 tolua_usertype(tolua_S,"anl::CImplicitBasisFunction");
 tolua_usertype(tolua_S,"anl::CImplicitBrightContrast");
 tolua_usertype(tolua_S,"anl::CImplicitRGBADotProduct");
 tolua_usertype(tolua_S,"CArray2Dd");
 tolua_usertype(tolua_S,"anl::CImplicitCos");
 tolua_usertype(tolua_S,"anl::CImplicitSelect");
 tolua_usertype(tolua_S,"anl::CImplicitScaleDomain");
 tolua_usertype(tolua_S,"anl::CImplicitFloor");
 tolua_usertype(tolua_S,"anl::CImplicitCombiner");
 tolua_usertype(tolua_S,"anl::CImplicitClamp");
 tolua_usertype(tolua_S,"anl::CRGBAModuleBase");
 tolua_usertype(tolua_S,"anl::CImplicitCache");
 tolua_usertype(tolua_S,"anl::SRGBA");
 tolua_usertype(tolua_S,"anl::CRGBAHSVToRGBA");
 tolua_usertype(tolua_S,"anl::CImplicitBlend");
 tolua_usertype(tolua_S,"anl::CImplicitFractal");
 tolua_usertype(tolua_S,"anl::CImplicitBias");
 tolua_usertype(tolua_S,"anl::SMappingRanges");
 tolua_usertype(tolua_S,"anl::CImplicitCellular");
 tolua_usertype(tolua_S,"anl::CRGBASelect");
 tolua_usertype(tolua_S,"anl::CImplicitExtractRGBAChannel");
 tolua_usertype(tolua_S,"anl::CImplicitConstant");
 tolua_usertype(tolua_S,"anl::CImplicitAutoCorrect");
 tolua_usertype(tolua_S,"anl::CImplicitGain");
 tolua_usertype(tolua_S,"CArray3Drgba");
 tolua_usertype(tolua_S,"anl::CRGBANormalize");
 tolua_usertype(tolua_S,"anl::CBasePRNG");
 tolua_usertype(tolua_S,"anl::LCG");
 tolua_usertype(tolua_S,"CArray2Drgba");
 tolua_usertype(tolua_S,"anl::CRGBARotateColor");
 tolua_usertype(tolua_S,"anl::CImplicitTranslateDomain");
 tolua_usertype(tolua_S,"anl::CImplicitSphere");
 tolua_usertype(tolua_S,"anl::CImplicitTiers");
 tolua_usertype(tolua_S,"anl::CImplicitPow");
 tolua_usertype(tolua_S,"anl::CImplicitSin");
 tolua_usertype(tolua_S,"anl::CRGBABlend");
 tolua_usertype(tolua_S,"CArray3Dd");
 tolua_usertype(tolua_S,"anl::CImplicitModuleBase");
 tolua_usertype(tolua_S,"anl::CCellularGenerator");
 tolua_usertype(tolua_S,"anl::CImplicitRotateDomain");
 tolua_usertype(tolua_S,"anl::KISS");
 tolua_usertype(tolua_S,"anl::MWC256");
 tolua_usertype(tolua_S,"anl::CMWC4096");
 tolua_usertype(tolua_S,"anl::CImplicitGradient");
 tolua_usertype(tolua_S,"anl::Xorshift");
 tolua_usertype(tolua_S,"anl::CRGBARGBAToHSV");
 tolua_usertype(tolua_S,"anl::CRGBAImplicitGrayscale");
}

/* method: setSeed of class  anl::CImplicitModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitModuleBase_setSeed00
static int tolua_bind_anl_anl_CImplicitModuleBase_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitModuleBase* self = (anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,1,0);
  unsigned int seed = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeed'",NULL);
#endif
  {
   self->setSeed(seed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CImplicitModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitModuleBase_get00
static int tolua_bind_anl_anl_CImplicitModuleBase_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitModuleBase* self = (anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CImplicitModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitModuleBase_get01
static int tolua_bind_anl_anl_CImplicitModuleBase_get01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitModuleBase* self = (anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get(x,y,z);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitModuleBase_get00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CImplicitModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitModuleBase_get02
static int tolua_bind_anl_anl_CImplicitModuleBase_get02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitModuleBase* self = (anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,0));
  double w = ((double)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get(x,y,z,w);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitModuleBase_get01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CImplicitModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitModuleBase_get03
static int tolua_bind_anl_anl_CImplicitModuleBase_get03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitModuleBase* self = (anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,0));
  double w = ((double)  tolua_tonumber(tolua_S,5,0));
  double u = ((double)  tolua_tonumber(tolua_S,6,0));
  double v = ((double)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get(x,y,z,w,u,v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitModuleBase_get02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_new00
static int tolua_bind_anl_anl_SRGBA_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::SRGBA* tolua_ret = (anl::SRGBA*)  new anl::SRGBA();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::SRGBA");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_new00_local
static int tolua_bind_anl_anl_SRGBA_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::SRGBA* tolua_ret = (anl::SRGBA*)  new anl::SRGBA();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::SRGBA");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_new01
static int tolua_bind_anl_anl_SRGBA_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   anl::SRGBA* tolua_ret = (anl::SRGBA*)  new anl::SRGBA(r,g,b,a);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::SRGBA");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_SRGBA_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_new01_local
static int tolua_bind_anl_anl_SRGBA_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   anl::SRGBA* tolua_ret = (anl::SRGBA*)  new anl::SRGBA(r,g,b,a);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::SRGBA");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_SRGBA_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_new02
static int tolua_bind_anl_anl_SRGBA_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   anl::SRGBA* tolua_ret = (anl::SRGBA*)  new anl::SRGBA(v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::SRGBA");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_SRGBA_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_new02_local
static int tolua_bind_anl_anl_SRGBA_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   anl::SRGBA* tolua_ret = (anl::SRGBA*)  new anl::SRGBA(v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::SRGBA");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_SRGBA_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SRGBA_delete00
static int tolua_bind_anl_anl_SRGBA_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::SRGBA* self = (anl::SRGBA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rgba of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_get_bind_anl_anl_SRGBA_rgba
static int tolua_get_bind_anl_anl_SRGBA_rgba(lua_State* tolua_S)
{
 int tolua_index;
  anl::SRGBA* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (anl::SRGBA*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=4)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->rgba[tolua_index]);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rgba of class  anl::SRGBA */
#ifndef TOLUA_DISABLE_tolua_set_bind_anl_anl_SRGBA_rgba
static int tolua_set_bind_anl_anl_SRGBA_rgba(lua_State* tolua_S)
{
 int tolua_index;
  anl::SRGBA* self;
 lua_pushstring(tolua_S,".self");
 lua_rawget(tolua_S,1);
 self = (anl::SRGBA*)  lua_touserdata(tolua_S,-1);
#ifndef TOLUA_RELEASE
 {
  tolua_Error tolua_err;
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in array indexing.",&tolua_err);
 }
#endif
 tolua_index = (int)tolua_tonumber(tolua_S,2,0);
#ifndef TOLUA_RELEASE
 if (tolua_index<0 || tolua_index>=4)
  tolua_error(tolua_S,"array indexing out of range.",NULL);
#endif
  self->rgba[tolua_index] = ((float)  tolua_tonumber(tolua_S,3,0));
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CBasePRNG_get00
static int tolua_bind_anl_anl_CBasePRNG_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CBasePRNG* self = (anl::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->get();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeed of class  anl::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CBasePRNG_setSeed00
static int tolua_bind_anl_anl_CBasePRNG_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CBasePRNG",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CBasePRNG* self = (anl::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
  unsigned int s = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeed'",NULL);
#endif
  {
   self->setSeed(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeedTime of class  anl::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CBasePRNG_setSeedTime00
static int tolua_bind_anl_anl_CBasePRNG_setSeedTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CBasePRNG* self = (anl::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeedTime'",NULL);
#endif
  {
   self->setSeedTime();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeedTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTarget of class  anl::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CBasePRNG_getTarget00
static int tolua_bind_anl_anl_CBasePRNG_getTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CBasePRNG",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CBasePRNG* self = (anl::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
  unsigned int t = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTarget'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getTarget(t);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRange of class  anl::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CBasePRNG_getRange00
static int tolua_bind_anl_anl_CBasePRNG_getRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CBasePRNG",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CBasePRNG* self = (anl::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
  unsigned int low = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int high = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRange'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRange(low,high);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get01 of class  anl::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CBasePRNG_get0100
static int tolua_bind_anl_anl_CBasePRNG_get0100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CBasePRNG* self = (anl::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get01'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get01();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get01'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::LCG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_LCG_new00
static int tolua_bind_anl_anl_LCG_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::LCG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::LCG* tolua_ret = (anl::LCG*)  new anl::LCG();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::LCG");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::LCG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_LCG_new00_local
static int tolua_bind_anl_anl_LCG_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::LCG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::LCG* tolua_ret = (anl::LCG*)  new anl::LCG();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::LCG");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::LCG */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_LCG_delete00
static int tolua_bind_anl_anl_LCG_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::LCG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::LCG* self = (anl::LCG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_Xorshift_new00
static int tolua_bind_anl_anl_Xorshift_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::Xorshift* tolua_ret = (anl::Xorshift*)  new anl::Xorshift();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::Xorshift");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_Xorshift_new00_local
static int tolua_bind_anl_anl_Xorshift_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::Xorshift* tolua_ret = (anl::Xorshift*)  new anl::Xorshift();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::Xorshift");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_Xorshift_new01
static int tolua_bind_anl_anl_Xorshift_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   anl::Xorshift* tolua_ret = (anl::Xorshift*)  new anl::Xorshift();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::Xorshift");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_Xorshift_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_Xorshift_new01_local
static int tolua_bind_anl_anl_Xorshift_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   anl::Xorshift* tolua_ret = (anl::Xorshift*)  new anl::Xorshift();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::Xorshift");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_Xorshift_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::MWC256 */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_MWC256_new00
static int tolua_bind_anl_anl_MWC256_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::MWC256",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::MWC256* tolua_ret = (anl::MWC256*)  new anl::MWC256();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::MWC256");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::MWC256 */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_MWC256_new00_local
static int tolua_bind_anl_anl_MWC256_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::MWC256",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::MWC256* tolua_ret = (anl::MWC256*)  new anl::MWC256();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::MWC256");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::MWC256 */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_MWC256_delete00
static int tolua_bind_anl_anl_MWC256_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::MWC256",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::MWC256* self = (anl::MWC256*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CMWC4096 */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CMWC4096_new00
static int tolua_bind_anl_anl_CMWC4096_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CMWC4096",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CMWC4096* tolua_ret = (anl::CMWC4096*)  new anl::CMWC4096();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CMWC4096");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CMWC4096 */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CMWC4096_new00_local
static int tolua_bind_anl_anl_CMWC4096_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CMWC4096",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CMWC4096* tolua_ret = (anl::CMWC4096*)  new anl::CMWC4096();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CMWC4096");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CMWC4096 */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CMWC4096_delete00
static int tolua_bind_anl_anl_CMWC4096_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CMWC4096",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CMWC4096* self = (anl::CMWC4096*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::KISS */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_KISS_new00
static int tolua_bind_anl_anl_KISS_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::KISS",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::KISS* tolua_ret = (anl::KISS*)  new anl::KISS();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::KISS");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::KISS */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_KISS_new00_local
static int tolua_bind_anl_anl_KISS_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::KISS",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::KISS* tolua_ret = (anl::KISS*)  new anl::KISS();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::KISS");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::KISS */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_KISS_delete00
static int tolua_bind_anl_anl_KISS_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::KISS",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::KISS* self = (anl::KISS*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeed of class  anl::CRGBAModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAModuleBase_setSeed00
static int tolua_bind_anl_anl_CRGBAModuleBase_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAModuleBase* self = (anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,1,0);
  unsigned int tolua_var_1 = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeed'",NULL);
#endif
  {
   self->setSeed(tolua_var_1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CRGBAModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAModuleBase_get00
static int tolua_bind_anl_anl_CRGBAModuleBase_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAModuleBase* self = (anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   anl::SRGBA tolua_ret = (anl::SRGBA)  self->get(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = new anl::SRGBA(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(anl::SRGBA));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CRGBAModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAModuleBase_get01
static int tolua_bind_anl_anl_CRGBAModuleBase_get01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBAModuleBase* self = (anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   anl::SRGBA tolua_ret = (anl::SRGBA)  self->get(x,y,z);
   {
#ifdef __cplusplus
    void* tolua_obj = new anl::SRGBA(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(anl::SRGBA));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAModuleBase_get00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CRGBAModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAModuleBase_get02
static int tolua_bind_anl_anl_CRGBAModuleBase_get02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBAModuleBase* self = (anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,0));
  double w = ((double)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   anl::SRGBA tolua_ret = (anl::SRGBA)  self->get(x,y,z,w);
   {
#ifdef __cplusplus
    void* tolua_obj = new anl::SRGBA(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(anl::SRGBA));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAModuleBase_get01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  anl::CRGBAModuleBase */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAModuleBase_get03
static int tolua_bind_anl_anl_CRGBAModuleBase_get03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBAModuleBase* self = (anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,0));
  double w = ((double)  tolua_tonumber(tolua_S,5,0));
  double u = ((double)  tolua_tonumber(tolua_S,6,0));
  double v = ((double)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   anl::SRGBA tolua_ret = (anl::SRGBA)  self->get(x,y,z,w,u,v);
   {
#ifdef __cplusplus
    void* tolua_obj = new anl::SRGBA(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(anl::SRGBA));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAModuleBase_get02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_new00
static int tolua_bind_anl_anl_CImplicitAutoCorrect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitAutoCorrect* tolua_ret = (anl::CImplicitAutoCorrect*)  new anl::CImplicitAutoCorrect();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitAutoCorrect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_new00_local
static int tolua_bind_anl_anl_CImplicitAutoCorrect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitAutoCorrect* tolua_ret = (anl::CImplicitAutoCorrect*)  new anl::CImplicitAutoCorrect();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitAutoCorrect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_new01
static int tolua_bind_anl_anl_CImplicitAutoCorrect_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double low = ((double)  tolua_tonumber(tolua_S,2,0));
  double high = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitAutoCorrect* tolua_ret = (anl::CImplicitAutoCorrect*)  new anl::CImplicitAutoCorrect(low,high);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitAutoCorrect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitAutoCorrect_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_new01_local
static int tolua_bind_anl_anl_CImplicitAutoCorrect_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double low = ((double)  tolua_tonumber(tolua_S,2,0));
  double high = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitAutoCorrect* tolua_ret = (anl::CImplicitAutoCorrect*)  new anl::CImplicitAutoCorrect(low,high);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitAutoCorrect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitAutoCorrect_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_delete00
static int tolua_bind_anl_anl_CImplicitAutoCorrect_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitAutoCorrect* self = (anl::CImplicitAutoCorrect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_setSource00
static int tolua_bind_anl_anl_CImplicitAutoCorrect_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitAutoCorrect* self = (anl::CImplicitAutoCorrect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRange of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_setRange00
static int tolua_bind_anl_anl_CImplicitAutoCorrect_setRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitAutoCorrect* self = (anl::CImplicitAutoCorrect*)  tolua_tousertype(tolua_S,1,0);
  double low = ((double)  tolua_tonumber(tolua_S,2,0));
  double high = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRange'",NULL);
#endif
  {
   self->setRange(low,high);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculate of class  anl::CImplicitAutoCorrect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitAutoCorrect_calculate00
static int tolua_bind_anl_anl_CImplicitAutoCorrect_calculate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitAutoCorrect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitAutoCorrect* self = (anl::CImplicitAutoCorrect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'calculate'",NULL);
#endif
  {
   self->calculate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_new00
static int tolua_bind_anl_anl_CImplicitBasisFunction_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitBasisFunction* tolua_ret = (anl::CImplicitBasisFunction*)  new anl::CImplicitBasisFunction();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitBasisFunction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_new00_local
static int tolua_bind_anl_anl_CImplicitBasisFunction_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitBasisFunction* tolua_ret = (anl::CImplicitBasisFunction*)  new anl::CImplicitBasisFunction();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitBasisFunction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_new01
static int tolua_bind_anl_anl_CImplicitBasisFunction_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  int interp = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitBasisFunction* tolua_ret = (anl::CImplicitBasisFunction*)  new anl::CImplicitBasisFunction(type,interp);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitBasisFunction");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBasisFunction_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_new01_local
static int tolua_bind_anl_anl_CImplicitBasisFunction_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  int interp = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitBasisFunction* tolua_ret = (anl::CImplicitBasisFunction*)  new anl::CImplicitBasisFunction(type,interp);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitBasisFunction");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBasisFunction_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_delete00
static int tolua_bind_anl_anl_CImplicitBasisFunction_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBasisFunction* self = (anl::CImplicitBasisFunction*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setType of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_setType00
static int tolua_bind_anl_anl_CImplicitBasisFunction_setType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBasisFunction* self = (anl::CImplicitBasisFunction*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setType'",NULL);
#endif
  {
   self->setType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInterp of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_setInterp00
static int tolua_bind_anl_anl_CImplicitBasisFunction_setInterp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBasisFunction* self = (anl::CImplicitBasisFunction*)  tolua_tousertype(tolua_S,1,0);
  int interp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInterp'",NULL);
#endif
  {
   self->setInterp(interp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInterp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotationAngle of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_setRotationAngle00
static int tolua_bind_anl_anl_CImplicitBasisFunction_setRotationAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBasisFunction* self = (anl::CImplicitBasisFunction*)  tolua_tousertype(tolua_S,1,0);
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
  double ay = ((double)  tolua_tonumber(tolua_S,3,0));
  double az = ((double)  tolua_tonumber(tolua_S,4,0));
  double angle = ((double)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotationAngle'",NULL);
#endif
  {
   self->setRotationAngle(ax,ay,az,angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotationAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeed of class  anl::CImplicitBasisFunction */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBasisFunction_setSeed00
static int tolua_bind_anl_anl_CImplicitBasisFunction_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBasisFunction",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBasisFunction* self = (anl::CImplicitBasisFunction*)  tolua_tousertype(tolua_S,1,0);
  unsigned int seed = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeed'",NULL);
#endif
  {
   self->setSeed(seed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_new00
static int tolua_bind_anl_anl_CImplicitBias_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitBias* tolua_ret = (anl::CImplicitBias*)  new anl::CImplicitBias(b);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitBias");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_new00_local
static int tolua_bind_anl_anl_CImplicitBias_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitBias* tolua_ret = (anl::CImplicitBias*)  new anl::CImplicitBias(b);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitBias");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_delete00
static int tolua_bind_anl_anl_CImplicitBias_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBias* self = (anl::CImplicitBias*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_setSource00
static int tolua_bind_anl_anl_CImplicitBias_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBias* self = (anl::CImplicitBias*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_setSource01
static int tolua_bind_anl_anl_CImplicitBias_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBias* self = (anl::CImplicitBias*)  tolua_tousertype(tolua_S,1,0);
  double s = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(s);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBias_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBias of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_setBias00
static int tolua_bind_anl_anl_CImplicitBias_setBias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBias* self = (anl::CImplicitBias*)  tolua_tousertype(tolua_S,1,0);
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBias'",NULL);
#endif
  {
   self->setBias(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBias of class  anl::CImplicitBias */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBias_setBias01
static int tolua_bind_anl_anl_CImplicitBias_setBias01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBias",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBias* self = (anl::CImplicitBias*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBias'",NULL);
#endif
  {
   self->setBias(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBias_setBias00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_new00
static int tolua_bind_anl_anl_CImplicitBlend_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitBlend* tolua_ret = (anl::CImplicitBlend*)  new anl::CImplicitBlend();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitBlend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_new00_local
static int tolua_bind_anl_anl_CImplicitBlend_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitBlend* tolua_ret = (anl::CImplicitBlend*)  new anl::CImplicitBlend();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitBlend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_delete00
static int tolua_bind_anl_anl_CImplicitBlend_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_setLowSource00
static int tolua_bind_anl_anl_CImplicitBlend_setLowSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLowSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_setHighSource00
static int tolua_bind_anl_anl_CImplicitBlend_setHighSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_setControlSource00
static int tolua_bind_anl_anl_CImplicitBlend_setControlSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setControlSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_setLowSource01
static int tolua_bind_anl_anl_CImplicitBlend_setLowSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBlend_setLowSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_setHighSource01
static int tolua_bind_anl_anl_CImplicitBlend_setHighSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBlend_setHighSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CImplicitBlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBlend_setControlSource01
static int tolua_bind_anl_anl_CImplicitBlend_setControlSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBlend",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBlend* self = (anl::CImplicitBlend*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBlend_setControlSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_new00
static int tolua_bind_anl_anl_CImplicitBrightContrast_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitBrightContrast* tolua_ret = (anl::CImplicitBrightContrast*)  new anl::CImplicitBrightContrast();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitBrightContrast");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_new00_local
static int tolua_bind_anl_anl_CImplicitBrightContrast_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitBrightContrast* tolua_ret = (anl::CImplicitBrightContrast*)  new anl::CImplicitBrightContrast();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitBrightContrast");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_delete00
static int tolua_bind_anl_anl_CImplicitBrightContrast_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setSource00
static int tolua_bind_anl_anl_CImplicitBrightContrast_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setSource01
static int tolua_bind_anl_anl_CImplicitBrightContrast_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBrightContrast_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBrightness of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness00
static int tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBrightness'",NULL);
#endif
  {
   self->setBrightness(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBrightness'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContrastThreshold of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold00
static int tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  double t = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContrastThreshold'",NULL);
#endif
  {
   self->setContrastThreshold(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContrastThreshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContrastFactor of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor00
static int tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  double t = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContrastFactor'",NULL);
#endif
  {
   self->setContrastFactor(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContrastFactor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBrightness of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness01
static int tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBrightness'",NULL);
#endif
  {
   self->setBrightness(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContrastThreshold of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold01
static int tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContrastThreshold'",NULL);
#endif
  {
   self->setContrastThreshold(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContrastFactor of class  anl::CImplicitBrightContrast */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor01
static int tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitBrightContrast",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitBrightContrast* self = (anl::CImplicitBrightContrast*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContrastFactor'",NULL);
#endif
  {
   self->setContrastFactor(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitCache */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCache_new00
static int tolua_bind_anl_anl_CImplicitCache_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitCache* tolua_ret = (anl::CImplicitCache*)  new anl::CImplicitCache();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitCache");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitCache */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCache_new00_local
static int tolua_bind_anl_anl_CImplicitCache_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitCache* tolua_ret = (anl::CImplicitCache*)  new anl::CImplicitCache();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitCache");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitCache */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCache_delete00
static int tolua_bind_anl_anl_CImplicitCache_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCache* self = (anl::CImplicitCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitCache */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCache_setSource00
static int tolua_bind_anl_anl_CImplicitCache_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCache* self = (anl::CImplicitCache*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitCache */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCache_setSource01
static int tolua_bind_anl_anl_CImplicitCache_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCache",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitCache* self = (anl::CImplicitCache*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitCache_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CCellularGenerator */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CCellularGenerator_new00
static int tolua_bind_anl_anl_CCellularGenerator_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CCellularGenerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CCellularGenerator* tolua_ret = (anl::CCellularGenerator*)  new anl::CCellularGenerator();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CCellularGenerator");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CCellularGenerator */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CCellularGenerator_new00_local
static int tolua_bind_anl_anl_CCellularGenerator_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CCellularGenerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CCellularGenerator* tolua_ret = (anl::CCellularGenerator*)  new anl::CCellularGenerator();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CCellularGenerator");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CCellularGenerator */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CCellularGenerator_delete00
static int tolua_bind_anl_anl_CCellularGenerator_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CCellularGenerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CCellularGenerator* self = (anl::CCellularGenerator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_new00
static int tolua_bind_anl_anl_CImplicitCellular_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitCellular* tolua_ret = (anl::CImplicitCellular*)  new anl::CImplicitCellular();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitCellular");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_new00_local
static int tolua_bind_anl_anl_CImplicitCellular_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitCellular* tolua_ret = (anl::CImplicitCellular*)  new anl::CImplicitCellular();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitCellular");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_new01
static int tolua_bind_anl_anl_CImplicitCellular_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double a = ((double)  tolua_tonumber(tolua_S,2,0));
  double b = ((double)  tolua_tonumber(tolua_S,3,0));
  double c = ((double)  tolua_tonumber(tolua_S,4,0));
  double d = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   anl::CImplicitCellular* tolua_ret = (anl::CImplicitCellular*)  new anl::CImplicitCellular(a,b,c,d);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitCellular");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitCellular_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_new01_local
static int tolua_bind_anl_anl_CImplicitCellular_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double a = ((double)  tolua_tonumber(tolua_S,2,0));
  double b = ((double)  tolua_tonumber(tolua_S,3,0));
  double c = ((double)  tolua_tonumber(tolua_S,4,0));
  double d = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   anl::CImplicitCellular* tolua_ret = (anl::CImplicitCellular*)  new anl::CImplicitCellular(a,b,c,d);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitCellular");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitCellular_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_delete00
static int tolua_bind_anl_anl_CImplicitCellular_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCellular* self = (anl::CImplicitCellular*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCoefficients of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_setCoefficients00
static int tolua_bind_anl_anl_CImplicitCellular_setCoefficients00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCellular* self = (anl::CImplicitCellular*)  tolua_tousertype(tolua_S,1,0);
  double a = ((double)  tolua_tonumber(tolua_S,2,0));
  double b = ((double)  tolua_tonumber(tolua_S,3,0));
  double c = ((double)  tolua_tonumber(tolua_S,4,0));
  double d = ((double)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCoefficients'",NULL);
#endif
  {
   self->setCoefficients(a,b,c,d);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCoefficients'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCellularSource of class  anl::CImplicitCellular */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCellular_setCellularSource00
static int tolua_bind_anl_anl_CImplicitCellular_setCellularSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCellular",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CCellularGenerator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCellular* self = (anl::CImplicitCellular*)  tolua_tousertype(tolua_S,1,0);
  anl::CCellularGenerator* m = ((anl::CCellularGenerator*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCellularSource'",NULL);
#endif
  {
   self->setCellularSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCellularSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitClamp */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitClamp_new00
static int tolua_bind_anl_anl_CImplicitClamp_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitClamp",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double low = ((double)  tolua_tonumber(tolua_S,2,0));
  double high = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitClamp* tolua_ret = (anl::CImplicitClamp*)  new anl::CImplicitClamp(low,high);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitClamp");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitClamp */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitClamp_new00_local
static int tolua_bind_anl_anl_CImplicitClamp_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitClamp",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double low = ((double)  tolua_tonumber(tolua_S,2,0));
  double high = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitClamp* tolua_ret = (anl::CImplicitClamp*)  new anl::CImplicitClamp(low,high);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitClamp");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitClamp */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitClamp_delete00
static int tolua_bind_anl_anl_CImplicitClamp_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitClamp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitClamp* self = (anl::CImplicitClamp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRange of class  anl::CImplicitClamp */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitClamp_setRange00
static int tolua_bind_anl_anl_CImplicitClamp_setRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitClamp",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitClamp* self = (anl::CImplicitClamp*)  tolua_tousertype(tolua_S,1,0);
  double low = ((double)  tolua_tonumber(tolua_S,2,0));
  double high = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRange'",NULL);
#endif
  {
   self->setRange(low,high);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitClamp */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitClamp_setSource00
static int tolua_bind_anl_anl_CImplicitClamp_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitClamp",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitClamp* self = (anl::CImplicitClamp*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitCombiner */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCombiner_new00
static int tolua_bind_anl_anl_CImplicitCombiner_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCombiner",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int type = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitCombiner* tolua_ret = (anl::CImplicitCombiner*)  new anl::CImplicitCombiner(type);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitCombiner");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitCombiner */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCombiner_new00_local
static int tolua_bind_anl_anl_CImplicitCombiner_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCombiner",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int type = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitCombiner* tolua_ret = (anl::CImplicitCombiner*)  new anl::CImplicitCombiner(type);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitCombiner");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitCombiner */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCombiner_delete00
static int tolua_bind_anl_anl_CImplicitCombiner_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCombiner",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCombiner* self = (anl::CImplicitCombiner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setType of class  anl::CImplicitCombiner */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCombiner_setType00
static int tolua_bind_anl_anl_CImplicitCombiner_setType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCombiner",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCombiner* self = (anl::CImplicitCombiner*)  tolua_tousertype(tolua_S,1,0);
  unsigned int type = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setType'",NULL);
#endif
  {
   self->setType(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearAllSources of class  anl::CImplicitCombiner */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCombiner_clearAllSources00
static int tolua_bind_anl_anl_CImplicitCombiner_clearAllSources00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCombiner",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCombiner* self = (anl::CImplicitCombiner*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearAllSources'",NULL);
#endif
  {
   self->clearAllSources();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAllSources'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitCombiner */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCombiner_setSource00
static int tolua_bind_anl_anl_CImplicitCombiner_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCombiner",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCombiner* self = (anl::CImplicitCombiner*)  tolua_tousertype(tolua_S,1,0);
  int which = ((int)  tolua_tonumber(tolua_S,2,0));
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(which,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitConstant_new00
static int tolua_bind_anl_anl_CImplicitConstant_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitConstant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitConstant* tolua_ret = (anl::CImplicitConstant*)  new anl::CImplicitConstant();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitConstant");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitConstant_new00_local
static int tolua_bind_anl_anl_CImplicitConstant_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitConstant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitConstant* tolua_ret = (anl::CImplicitConstant*)  new anl::CImplicitConstant();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitConstant");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitConstant_new01
static int tolua_bind_anl_anl_CImplicitConstant_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitConstant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double c = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitConstant* tolua_ret = (anl::CImplicitConstant*)  new anl::CImplicitConstant(c);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitConstant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitConstant_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitConstant_new01_local
static int tolua_bind_anl_anl_CImplicitConstant_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitConstant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double c = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitConstant* tolua_ret = (anl::CImplicitConstant*)  new anl::CImplicitConstant(c);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitConstant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitConstant_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitConstant_delete00
static int tolua_bind_anl_anl_CImplicitConstant_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitConstant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitConstant* self = (anl::CImplicitConstant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setConstant of class  anl::CImplicitConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitConstant_setConstant00
static int tolua_bind_anl_anl_CImplicitConstant_setConstant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitConstant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitConstant* self = (anl::CImplicitConstant*)  tolua_tousertype(tolua_S,1,0);
  double c = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setConstant'",NULL);
#endif
  {
   self->setConstant(c);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setConstant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitCos */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCos_new00
static int tolua_bind_anl_anl_CImplicitCos_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCos",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitCos* tolua_ret = (anl::CImplicitCos*)  new anl::CImplicitCos();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitCos");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitCos */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCos_new00_local
static int tolua_bind_anl_anl_CImplicitCos_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitCos",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitCos* tolua_ret = (anl::CImplicitCos*)  new anl::CImplicitCos();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitCos");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitCos */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCos_delete00
static int tolua_bind_anl_anl_CImplicitCos_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCos",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCos* self = (anl::CImplicitCos*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitCos */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCos_setSource00
static int tolua_bind_anl_anl_CImplicitCos_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCos",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitCos* self = (anl::CImplicitCos*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitCos */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitCos_setSource01
static int tolua_bind_anl_anl_CImplicitCos_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitCos",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitCos* self = (anl::CImplicitCos*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitCos_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitFloor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFloor_new00
static int tolua_bind_anl_anl_CImplicitFloor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitFloor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitFloor* tolua_ret = (anl::CImplicitFloor*)  new anl::CImplicitFloor();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitFloor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitFloor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFloor_new00_local
static int tolua_bind_anl_anl_CImplicitFloor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitFloor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitFloor* tolua_ret = (anl::CImplicitFloor*)  new anl::CImplicitFloor();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitFloor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitFloor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFloor_delete00
static int tolua_bind_anl_anl_CImplicitFloor_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFloor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFloor* self = (anl::CImplicitFloor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitFloor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFloor_setSource00
static int tolua_bind_anl_anl_CImplicitFloor_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFloor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFloor* self = (anl::CImplicitFloor*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitFloor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFloor_setSource01
static int tolua_bind_anl_anl_CImplicitFloor_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFloor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitFloor* self = (anl::CImplicitFloor*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitFloor_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitExtractRGBAChannel* tolua_ret = (anl::CImplicitExtractRGBAChannel*)  new anl::CImplicitExtractRGBAChannel();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitExtractRGBAChannel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00_local
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitExtractRGBAChannel* tolua_ret = (anl::CImplicitExtractRGBAChannel*)  new anl::CImplicitExtractRGBAChannel();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitExtractRGBAChannel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int channel = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitExtractRGBAChannel* tolua_ret = (anl::CImplicitExtractRGBAChannel*)  new anl::CImplicitExtractRGBAChannel(channel);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitExtractRGBAChannel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01_local
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int channel = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitExtractRGBAChannel* tolua_ret = (anl::CImplicitExtractRGBAChannel*)  new anl::CImplicitExtractRGBAChannel(channel);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitExtractRGBAChannel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_delete00
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitExtractRGBAChannel* self = (anl::CImplicitExtractRGBAChannel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource00
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitExtractRGBAChannel* self = (anl::CImplicitExtractRGBAChannel*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource01
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitExtractRGBAChannel* self = (anl::CImplicitExtractRGBAChannel*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChannel of class  anl::CImplicitExtractRGBAChannel */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setChannel00
static int tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setChannel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitExtractRGBAChannel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitExtractRGBAChannel* self = (anl::CImplicitExtractRGBAChannel*)  tolua_tousertype(tolua_S,1,0);
  int channel = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChannel'",NULL);
#endif
  {
   self->setChannel(channel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChannel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_new00
static int tolua_bind_anl_anl_CImplicitFractal_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int type = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int basistype = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int interptype = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  {
   anl::CImplicitFractal* tolua_ret = (anl::CImplicitFractal*)  new anl::CImplicitFractal(type,basistype,interptype);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitFractal");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_new00_local
static int tolua_bind_anl_anl_CImplicitFractal_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int type = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int basistype = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int interptype = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  {
   anl::CImplicitFractal* tolua_ret = (anl::CImplicitFractal*)  new anl::CImplicitFractal(type,basistype,interptype);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitFractal");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumOctaves of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setNumOctaves00
static int tolua_bind_anl_anl_CImplicitFractal_setNumOctaves00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumOctaves'",NULL);
#endif
  {
   self->setNumOctaves(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumOctaves'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrequency of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setFrequency00
static int tolua_bind_anl_anl_CImplicitFractal_setFrequency00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  double f = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrequency'",NULL);
#endif
  {
   self->setFrequency(f);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrequency'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLacunarity of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setLacunarity00
static int tolua_bind_anl_anl_CImplicitFractal_setLacunarity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  double l = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLacunarity'",NULL);
#endif
  {
   self->setLacunarity(l);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLacunarity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGain of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setGain00
static int tolua_bind_anl_anl_CImplicitFractal_setGain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  double g = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGain'",NULL);
#endif
  {
   self->setGain(g);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffset of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setOffset00
static int tolua_bind_anl_anl_CImplicitFractal_setOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  double o = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffset'",NULL);
#endif
  {
   self->setOffset(o);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setH of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setH00
static int tolua_bind_anl_anl_CImplicitFractal_setH00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  double h = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setH'",NULL);
#endif
  {
   self->setH(h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setH'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setType of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setType00
static int tolua_bind_anl_anl_CImplicitFractal_setType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  unsigned int t = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setType'",NULL);
#endif
  {
   self->setType(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAllSourceTypes of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setAllSourceTypes00
static int tolua_bind_anl_anl_CImplicitFractal_setAllSourceTypes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  unsigned int basis_type = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int interp = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAllSourceTypes'",NULL);
#endif
  {
   self->setAllSourceTypes(basis_type,interp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAllSourceTypes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSourceType of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setSourceType00
static int tolua_bind_anl_anl_CImplicitFractal_setSourceType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  int which = ((int)  tolua_tonumber(tolua_S,2,0));
  unsigned int type = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int interp = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSourceType'",NULL);
#endif
  {
   self->setSourceType(which,type,interp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSourceType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: overrideSource of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_overrideSource00
static int tolua_bind_anl_anl_CImplicitFractal_overrideSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  int which = ((int)  tolua_tonumber(tolua_S,2,0));
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'overrideSource'",NULL);
#endif
  {
   self->overrideSource(which,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'overrideSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetSource of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_resetSource00
static int tolua_bind_anl_anl_CImplicitFractal_resetSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  int which = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetSource'",NULL);
#endif
  {
   self->resetSource(which);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetAllSources of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_resetAllSources00
static int tolua_bind_anl_anl_CImplicitFractal_resetAllSources00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resetAllSources'",NULL);
#endif
  {
   self->resetAllSources();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetAllSources'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeed of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_setSeed00
static int tolua_bind_anl_anl_CImplicitFractal_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  unsigned int seed = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeed'",NULL);
#endif
  {
   self->setSeed(seed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBasis of class  anl::CImplicitFractal */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFractal_getBasis00
static int tolua_bind_anl_anl_CImplicitFractal_getBasis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFractal",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFractal* self = (anl::CImplicitFractal*)  tolua_tousertype(tolua_S,1,0);
  int which = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBasis'",NULL);
#endif
  {
   anl::CImplicitBasisFunction* tolua_ret = (anl::CImplicitBasisFunction*)  self->getBasis(which);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitBasisFunction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBasis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_new00
static int tolua_bind_anl_anl_CImplicitFunctionGradient_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitFunctionGradient* tolua_ret = (anl::CImplicitFunctionGradient*)  new anl::CImplicitFunctionGradient();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitFunctionGradient");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_new00_local
static int tolua_bind_anl_anl_CImplicitFunctionGradient_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitFunctionGradient* tolua_ret = (anl::CImplicitFunctionGradient*)  new anl::CImplicitFunctionGradient();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitFunctionGradient");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_delete00
static int tolua_bind_anl_anl_CImplicitFunctionGradient_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFunctionGradient* self = (anl::CImplicitFunctionGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_setSource00
static int tolua_bind_anl_anl_CImplicitFunctionGradient_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFunctionGradient* self = (anl::CImplicitFunctionGradient*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_setSource01
static int tolua_bind_anl_anl_CImplicitFunctionGradient_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitFunctionGradient* self = (anl::CImplicitFunctionGradient*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitFunctionGradient_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxis of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_setAxis00
static int tolua_bind_anl_anl_CImplicitFunctionGradient_setAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFunctionGradient* self = (anl::CImplicitFunctionGradient*)  tolua_tousertype(tolua_S,1,0);
  int axis = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxis'",NULL);
#endif
  {
   self->setAxis(axis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpacing of class  anl::CImplicitFunctionGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitFunctionGradient_setSpacing00
static int tolua_bind_anl_anl_CImplicitFunctionGradient_setSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitFunctionGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitFunctionGradient* self = (anl::CImplicitFunctionGradient*)  tolua_tousertype(tolua_S,1,0);
  double s = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpacing'",NULL);
#endif
  {
   self->setSpacing(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_new00
static int tolua_bind_anl_anl_CImplicitGain_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitGain* tolua_ret = (anl::CImplicitGain*)  new anl::CImplicitGain(b);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitGain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_new00_local
static int tolua_bind_anl_anl_CImplicitGain_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CImplicitGain* tolua_ret = (anl::CImplicitGain*)  new anl::CImplicitGain(b);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitGain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_delete00
static int tolua_bind_anl_anl_CImplicitGain_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitGain* self = (anl::CImplicitGain*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_setSource00
static int tolua_bind_anl_anl_CImplicitGain_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitGain* self = (anl::CImplicitGain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_setSource01
static int tolua_bind_anl_anl_CImplicitGain_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitGain* self = (anl::CImplicitGain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(b);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitGain_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGain of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_setGain00
static int tolua_bind_anl_anl_CImplicitGain_setGain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitGain* self = (anl::CImplicitGain*)  tolua_tousertype(tolua_S,1,0);
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGain'",NULL);
#endif
  {
   self->setGain(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGain of class  anl::CImplicitGain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGain_setGain01
static int tolua_bind_anl_anl_CImplicitGain_setGain01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitGain* self = (anl::CImplicitGain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGain'",NULL);
#endif
  {
   self->setGain(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitGain_setGain00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGradient_new00
static int tolua_bind_anl_anl_CImplicitGradient_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitGradient* tolua_ret = (anl::CImplicitGradient*)  new anl::CImplicitGradient();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitGradient");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGradient_new00_local
static int tolua_bind_anl_anl_CImplicitGradient_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitGradient* tolua_ret = (anl::CImplicitGradient*)  new anl::CImplicitGradient();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitGradient");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGradient_delete00
static int tolua_bind_anl_anl_CImplicitGradient_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitGradient* self = (anl::CImplicitGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGradient of class  anl::CImplicitGradient */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitGradient_setGradient00
static int tolua_bind_anl_anl_CImplicitGradient_setGradient00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,13,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,14,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitGradient* self = (anl::CImplicitGradient*)  tolua_tousertype(tolua_S,1,0);
  double x1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double x2 = ((double)  tolua_tonumber(tolua_S,3,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y2 = ((double)  tolua_tonumber(tolua_S,5,0));
  double z1 = ((double)  tolua_tonumber(tolua_S,6,0));
  double z2 = ((double)  tolua_tonumber(tolua_S,7,0));
  double w1 = ((double)  tolua_tonumber(tolua_S,8,0));
  double w2 = ((double)  tolua_tonumber(tolua_S,9,0));
  double u1 = ((double)  tolua_tonumber(tolua_S,10,0));
  double u2 = ((double)  tolua_tonumber(tolua_S,11,0));
  double v1 = ((double)  tolua_tonumber(tolua_S,12,0));
  double v2 = ((double)  tolua_tonumber(tolua_S,13,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGradient'",NULL);
#endif
  {
   self->setGradient(x1,x2,y1,y2,z1,z2,w1,w2,u1,u2,v1,v2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGradient'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_new00
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitRGBADotProduct* tolua_ret = (anl::CImplicitRGBADotProduct*)  new anl::CImplicitRGBADotProduct();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitRGBADotProduct");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_new00_local
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitRGBADotProduct* tolua_ret = (anl::CImplicitRGBADotProduct*)  new anl::CImplicitRGBADotProduct();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitRGBADotProduct");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_delete00
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRGBADotProduct* self = (anl::CImplicitRGBADotProduct*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource1 of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource100
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRGBADotProduct* self = (anl::CImplicitRGBADotProduct*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource1'",NULL);
#endif
  {
   self->setSource1(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource1 of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource101
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource101(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRGBADotProduct* self = (anl::CImplicitRGBADotProduct*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource1'",NULL);
#endif
  {
   self->setSource1(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource100(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource2 of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource200
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRGBADotProduct* self = (anl::CImplicitRGBADotProduct*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource2'",NULL);
#endif
  {
   self->setSource2(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource2 of class  anl::CImplicitRGBADotProduct */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource201
static int tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource201(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRGBADotProduct",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRGBADotProduct* self = (anl::CImplicitRGBADotProduct*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource2'",NULL);
#endif
  {
   self->setSource2(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource200(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_new00
static int tolua_bind_anl_anl_CImplicitRotateDomain_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
  double ay = ((double)  tolua_tonumber(tolua_S,3,0));
  double az = ((double)  tolua_tonumber(tolua_S,4,0));
  double angle_deg = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   anl::CImplicitRotateDomain* tolua_ret = (anl::CImplicitRotateDomain*)  new anl::CImplicitRotateDomain(ax,ay,az,angle_deg);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitRotateDomain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_new00_local
static int tolua_bind_anl_anl_CImplicitRotateDomain_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
  double ay = ((double)  tolua_tonumber(tolua_S,3,0));
  double az = ((double)  tolua_tonumber(tolua_S,4,0));
  double angle_deg = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   anl::CImplicitRotateDomain* tolua_ret = (anl::CImplicitRotateDomain*)  new anl::CImplicitRotateDomain(ax,ay,az,angle_deg);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitRotateDomain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_delete00
static int tolua_bind_anl_anl_CImplicitRotateDomain_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setSource00
static int tolua_bind_anl_anl_CImplicitRotateDomain_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setSource01
static int tolua_bind_anl_anl_CImplicitRotateDomain_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRotateDomain_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxis of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxis00
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
  double ay = ((double)  tolua_tonumber(tolua_S,3,0));
  double az = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxis'",NULL);
#endif
  {
   self->setAxis(ax,ay,az);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxis of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxis01
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxis01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* ax = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
  anl::CImplicitModuleBase* ay = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::CImplicitModuleBase* az = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxis'",NULL);
#endif
  {
   self->setAxis(ax,ay,az);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRotateDomain_setAxis00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisX of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX00
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisX'",NULL);
#endif
  {
   self->setAxisX(ax);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxisX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisY of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY00
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  double ay = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisY'",NULL);
#endif
  {
   self->setAxisY(ay);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxisY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisZ of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ00
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  double az = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisZ'",NULL);
#endif
  {
   self->setAxisZ(az);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxisZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisX of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX01
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* ax = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisX'",NULL);
#endif
  {
   self->setAxisX(ax);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisY of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY01
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* ay = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisY'",NULL);
#endif
  {
   self->setAxisY(ay);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisZ of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ01
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* az = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisZ'",NULL);
#endif
  {
   self->setAxisZ(az);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAngle00
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  double a = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'",NULL);
#endif
  {
   self->setAngle(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  anl::CImplicitRotateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitRotateDomain_setAngle01
static int tolua_bind_anl_anl_CImplicitRotateDomain_setAngle01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitRotateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitRotateDomain* self = (anl::CImplicitRotateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* a = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'",NULL);
#endif
  {
   self->setAngle(a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitRotateDomain_setAngle00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_new00
static int tolua_bind_anl_anl_CImplicitScaleDomain_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitScaleDomain* tolua_ret = (anl::CImplicitScaleDomain*)  new anl::CImplicitScaleDomain();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitScaleDomain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_new00_local
static int tolua_bind_anl_anl_CImplicitScaleDomain_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitScaleDomain* tolua_ret = (anl::CImplicitScaleDomain*)  new anl::CImplicitScaleDomain();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitScaleDomain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_new01
static int tolua_bind_anl_anl_CImplicitScaleDomain_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,1));
  double w = ((double)  tolua_tonumber(tolua_S,5,1));
  double u = ((double)  tolua_tonumber(tolua_S,6,1));
  double v = ((double)  tolua_tonumber(tolua_S,7,1));
  {
   anl::CImplicitScaleDomain* tolua_ret = (anl::CImplicitScaleDomain*)  new anl::CImplicitScaleDomain(x,y,z,w,u,v);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitScaleDomain");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_new01_local
static int tolua_bind_anl_anl_CImplicitScaleDomain_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,1));
  double w = ((double)  tolua_tonumber(tolua_S,5,1));
  double u = ((double)  tolua_tonumber(tolua_S,6,1));
  double v = ((double)  tolua_tonumber(tolua_S,7,1));
  {
   anl::CImplicitScaleDomain* tolua_ret = (anl::CImplicitScaleDomain*)  new anl::CImplicitScaleDomain(x,y,z,w,u,v);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitScaleDomain");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_delete00
static int tolua_bind_anl_anl_CImplicitScaleDomain_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double z = ((double)  tolua_tonumber(tolua_S,4,1));
  double w = ((double)  tolua_tonumber(tolua_S,5,1));
  double u = ((double)  tolua_tonumber(tolua_S,6,1));
  double v = ((double)  tolua_tonumber(tolua_S,7,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'",NULL);
#endif
  {
   self->setScale(x,y,z,w,u,v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setXScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setXScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setXScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXScale'",NULL);
#endif
  {
   self->setXScale(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setXScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setYScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setYScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setYScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYScale'",NULL);
#endif
  {
   self->setYScale(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setYScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setZScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setZScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZScale'",NULL);
#endif
  {
   self->setZScale(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setWScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setWScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWScale'",NULL);
#endif
  {
   self->setWScale(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setUScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setUScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUScale'",NULL);
#endif
  {
   self->setUScale(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setVScale00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setVScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVScale'",NULL);
#endif
  {
   self->setVScale(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setXScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setXScale01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setXScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* x = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXScale'",NULL);
#endif
  {
   self->setXScale(x);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setXScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setYScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setYScale01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setYScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* y = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYScale'",NULL);
#endif
  {
   self->setYScale(y);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setYScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setZScale01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setZScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* z = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZScale'",NULL);
#endif
  {
   self->setZScale(z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setZScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setWScale01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setWScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* w = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWScale'",NULL);
#endif
  {
   self->setWScale(w);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setWScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setUScale01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setUScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* u = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUScale'",NULL);
#endif
  {
   self->setUScale(u);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setUScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVScale of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setVScale01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setVScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* v = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVScale'",NULL);
#endif
  {
   self->setVScale(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setVScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setSource00
static int tolua_bind_anl_anl_CImplicitScaleDomain_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitScaleDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleDomain_setSource01
static int tolua_bind_anl_anl_CImplicitScaleDomain_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleDomain* self = (anl::CImplicitScaleDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleDomain_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_new00
static int tolua_bind_anl_anl_CImplicitScaleOffset_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double scale = ((double)  tolua_tonumber(tolua_S,2,0));
  double offset = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitScaleOffset* tolua_ret = (anl::CImplicitScaleOffset*)  new anl::CImplicitScaleOffset(scale,offset);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitScaleOffset");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_new00_local
static int tolua_bind_anl_anl_CImplicitScaleOffset_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double scale = ((double)  tolua_tonumber(tolua_S,2,0));
  double offset = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CImplicitScaleOffset* tolua_ret = (anl::CImplicitScaleOffset*)  new anl::CImplicitScaleOffset(scale,offset);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitScaleOffset");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_delete00
static int tolua_bind_anl_anl_CImplicitScaleOffset_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_setSource00
static int tolua_bind_anl_anl_CImplicitScaleOffset_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_setSource01
static int tolua_bind_anl_anl_CImplicitScaleOffset_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleOffset_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_setScale00
static int tolua_bind_anl_anl_CImplicitScaleOffset_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
  double scale = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'",NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffset of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_setOffset00
static int tolua_bind_anl_anl_CImplicitScaleOffset_setOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
  double offset = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffset'",NULL);
#endif
  {
   self->setOffset(offset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_setScale01
static int tolua_bind_anl_anl_CImplicitScaleOffset_setScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* scale = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'",NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleOffset_setScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffset of class  anl::CImplicitScaleOffset */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitScaleOffset_setOffset01
static int tolua_bind_anl_anl_CImplicitScaleOffset_setOffset01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitScaleOffset",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitScaleOffset* self = (anl::CImplicitScaleOffset*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* offset = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffset'",NULL);
#endif
  {
   self->setOffset(offset);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitScaleOffset_setOffset00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_new00
static int tolua_bind_anl_anl_CImplicitSelect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitSelect* tolua_ret = (anl::CImplicitSelect*)  new anl::CImplicitSelect();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitSelect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_new00_local
static int tolua_bind_anl_anl_CImplicitSelect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitSelect* tolua_ret = (anl::CImplicitSelect*)  new anl::CImplicitSelect();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitSelect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_delete00
static int tolua_bind_anl_anl_CImplicitSelect_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setLowSource00
static int tolua_bind_anl_anl_CImplicitSelect_setLowSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLowSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setHighSource00
static int tolua_bind_anl_anl_CImplicitSelect_setHighSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setControlSource00
static int tolua_bind_anl_anl_CImplicitSelect_setControlSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* b = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setControlSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setLowSource01
static int tolua_bind_anl_anl_CImplicitSelect_setLowSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSelect_setLowSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setHighSource01
static int tolua_bind_anl_anl_CImplicitSelect_setHighSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSelect_setHighSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setControlSource01
static int tolua_bind_anl_anl_CImplicitSelect_setControlSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSelect_setControlSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThreshold of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setThreshold00
static int tolua_bind_anl_anl_CImplicitSelect_setThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  double t = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThreshold'",NULL);
#endif
  {
   self->setThreshold(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setThreshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFalloff of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setFalloff00
static int tolua_bind_anl_anl_CImplicitSelect_setFalloff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  double f = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFalloff'",NULL);
#endif
  {
   self->setFalloff(f);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFalloff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThreshold of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setThreshold01
static int tolua_bind_anl_anl_CImplicitSelect_setThreshold01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThreshold'",NULL);
#endif
  {
   self->setThreshold(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSelect_setThreshold00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFalloff of class  anl::CImplicitSelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSelect_setFalloff01
static int tolua_bind_anl_anl_CImplicitSelect_setFalloff01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSelect* self = (anl::CImplicitSelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFalloff'",NULL);
#endif
  {
   self->setFalloff(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSelect_setFalloff00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitSin */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSin_new00
static int tolua_bind_anl_anl_CImplicitSin_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitSin",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitSin* tolua_ret = (anl::CImplicitSin*)  new anl::CImplicitSin();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitSin");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitSin */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSin_new00_local
static int tolua_bind_anl_anl_CImplicitSin_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitSin",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitSin* tolua_ret = (anl::CImplicitSin*)  new anl::CImplicitSin();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitSin");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitSin */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSin_delete00
static int tolua_bind_anl_anl_CImplicitSin_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSin",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSin* self = (anl::CImplicitSin*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitSin */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSin_setSource00
static int tolua_bind_anl_anl_CImplicitSin_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSin",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSin* self = (anl::CImplicitSin*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitSin */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSin_setSource01
static int tolua_bind_anl_anl_CImplicitSin_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSin",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSin* self = (anl::CImplicitSin*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSin_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_new00
static int tolua_bind_anl_anl_CImplicitSphere_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitSphere* tolua_ret = (anl::CImplicitSphere*)  new anl::CImplicitSphere();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitSphere");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_new00_local
static int tolua_bind_anl_anl_CImplicitSphere_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitSphere* tolua_ret = (anl::CImplicitSphere*)  new anl::CImplicitSphere();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitSphere");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_delete00
static int tolua_bind_anl_anl_CImplicitSphere_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenter of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenter00
static int tolua_bind_anl_anl_CImplicitSphere_setCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cx = ((double)  tolua_tonumber(tolua_S,2,0));
  double cy = ((double)  tolua_tonumber(tolua_S,3,0));
  double cz = ((double)  tolua_tonumber(tolua_S,4,0));
  double cw = ((double)  tolua_tonumber(tolua_S,5,0));
  double cu = ((double)  tolua_tonumber(tolua_S,6,0));
  double cv = ((double)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenter'",NULL);
#endif
  {
   self->setCenter(cx,cy,cz,cw,cu,cv);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterX of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterX00
static int tolua_bind_anl_anl_CImplicitSphere_setCenterX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cx = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterX'",NULL);
#endif
  {
   self->setCenterX(cx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterY of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterY00
static int tolua_bind_anl_anl_CImplicitSphere_setCenterY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cy = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterY'",NULL);
#endif
  {
   self->setCenterY(cy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterZ of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterZ00
static int tolua_bind_anl_anl_CImplicitSphere_setCenterZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cz = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterZ'",NULL);
#endif
  {
   self->setCenterZ(cz);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterW of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterW00
static int tolua_bind_anl_anl_CImplicitSphere_setCenterW00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cw = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterW'",NULL);
#endif
  {
   self->setCenterW(cw);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterW'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterU of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterU00
static int tolua_bind_anl_anl_CImplicitSphere_setCenterU00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cu = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterU'",NULL);
#endif
  {
   self->setCenterU(cu);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterU'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterV of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterV00
static int tolua_bind_anl_anl_CImplicitSphere_setCenterV00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double cv = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterV'",NULL);
#endif
  {
   self->setCenterV(cv);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterV'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterX of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterX01
static int tolua_bind_anl_anl_CImplicitSphere_setCenterX01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* cx = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterX'",NULL);
#endif
  {
   self->setCenterX(cx);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setCenterX00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterY of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterY01
static int tolua_bind_anl_anl_CImplicitSphere_setCenterY01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* cy = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterY'",NULL);
#endif
  {
   self->setCenterY(cy);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setCenterY00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterZ of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterZ01
static int tolua_bind_anl_anl_CImplicitSphere_setCenterZ01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* cz = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterZ'",NULL);
#endif
  {
   self->setCenterZ(cz);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setCenterZ00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterW of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterW01
static int tolua_bind_anl_anl_CImplicitSphere_setCenterW01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* cw = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterW'",NULL);
#endif
  {
   self->setCenterW(cw);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setCenterW00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterU of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterU01
static int tolua_bind_anl_anl_CImplicitSphere_setCenterU01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* cu = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterU'",NULL);
#endif
  {
   self->setCenterU(cu);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setCenterU00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterV of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setCenterV01
static int tolua_bind_anl_anl_CImplicitSphere_setCenterV01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* cv = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterV'",NULL);
#endif
  {
   self->setCenterV(cv);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setCenterV00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setRadius00
static int tolua_bind_anl_anl_CImplicitSphere_setRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  double r = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'",NULL);
#endif
  {
   self->setRadius(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  anl::CImplicitSphere */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitSphere_setRadius01
static int tolua_bind_anl_anl_CImplicitSphere_setRadius01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitSphere",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitSphere* self = (anl::CImplicitSphere*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* r = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'",NULL);
#endif
  {
   self->setRadius(r);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitSphere_setRadius00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_new00
static int tolua_bind_anl_anl_CImplicitPow_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitPow* tolua_ret = (anl::CImplicitPow*)  new anl::CImplicitPow();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitPow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_new00_local
static int tolua_bind_anl_anl_CImplicitPow_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitPow* tolua_ret = (anl::CImplicitPow*)  new anl::CImplicitPow();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitPow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_delete00
static int tolua_bind_anl_anl_CImplicitPow_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitPow* self = (anl::CImplicitPow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_setSource00
static int tolua_bind_anl_anl_CImplicitPow_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitPow* self = (anl::CImplicitPow*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_setSource01
static int tolua_bind_anl_anl_CImplicitPow_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitPow* self = (anl::CImplicitPow*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitPow_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPower of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_setPower00
static int tolua_bind_anl_anl_CImplicitPow_setPower00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitPow* self = (anl::CImplicitPow*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPower'",NULL);
#endif
  {
   self->setPower(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPower'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPower of class  anl::CImplicitPow */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitPow_setPower01
static int tolua_bind_anl_anl_CImplicitPow_setPower01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitPow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitPow* self = (anl::CImplicitPow*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPower'",NULL);
#endif
  {
   self->setPower(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitPow_setPower00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_new00
static int tolua_bind_anl_anl_CImplicitTiers_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitTiers* tolua_ret = (anl::CImplicitTiers*)  new anl::CImplicitTiers();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitTiers");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_new00_local
static int tolua_bind_anl_anl_CImplicitTiers_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitTiers* tolua_ret = (anl::CImplicitTiers*)  new anl::CImplicitTiers();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitTiers");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_new01
static int tolua_bind_anl_anl_CImplicitTiers_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int numtiers = ((int)  tolua_tonumber(tolua_S,2,0));
  bool smooth = ((bool)  tolua_toboolean(tolua_S,3,0));
  {
   anl::CImplicitTiers* tolua_ret = (anl::CImplicitTiers*)  new anl::CImplicitTiers(numtiers,smooth);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitTiers");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTiers_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_new01_local
static int tolua_bind_anl_anl_CImplicitTiers_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int numtiers = ((int)  tolua_tonumber(tolua_S,2,0));
  bool smooth = ((bool)  tolua_toboolean(tolua_S,3,0));
  {
   anl::CImplicitTiers* tolua_ret = (anl::CImplicitTiers*)  new anl::CImplicitTiers(numtiers,smooth);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitTiers");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTiers_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_delete00
static int tolua_bind_anl_anl_CImplicitTiers_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTiers* self = (anl::CImplicitTiers*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_setSource00
static int tolua_bind_anl_anl_CImplicitTiers_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTiers* self = (anl::CImplicitTiers*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_setSource01
static int tolua_bind_anl_anl_CImplicitTiers_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTiers* self = (anl::CImplicitTiers*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTiers_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumTiers of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_setNumTiers00
static int tolua_bind_anl_anl_CImplicitTiers_setNumTiers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTiers* self = (anl::CImplicitTiers*)  tolua_tousertype(tolua_S,1,0);
  int numtiers = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumTiers'",NULL);
#endif
  {
   self->setNumTiers(numtiers);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumTiers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSmooth of class  anl::CImplicitTiers */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTiers_setSmooth00
static int tolua_bind_anl_anl_CImplicitTiers_setSmooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTiers",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTiers* self = (anl::CImplicitTiers*)  tolua_tousertype(tolua_S,1,0);
  bool smooth = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSmooth'",NULL);
#endif
  {
   self->setSmooth(smooth);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSmooth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_new00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitTranslateDomain* tolua_ret = (anl::CImplicitTranslateDomain*)  new anl::CImplicitTranslateDomain();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CImplicitTranslateDomain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_new00_local
static int tolua_bind_anl_anl_CImplicitTranslateDomain_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CImplicitTranslateDomain* tolua_ret = (anl::CImplicitTranslateDomain*)  new anl::CImplicitTranslateDomain();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CImplicitTranslateDomain");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_delete00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setXAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXAxisSource'",NULL);
#endif
  {
   self->setXAxisSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setXAxisSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setYAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYAxisSource'",NULL);
#endif
  {
   self->setYAxisSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setYAxisSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZAxisSource'",NULL);
#endif
  {
   self->setZAxisSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZAxisSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWAxisSource'",NULL);
#endif
  {
   self->setWAxisSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWAxisSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUAxisSource'",NULL);
#endif
  {
   self->setUAxisSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUAxisSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVAxisSource'",NULL);
#endif
  {
   self->setVAxisSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVAxisSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setXAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setXAxisSource'",NULL);
#endif
  {
   self->setXAxisSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setYAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setYAxisSource'",NULL);
#endif
  {
   self->setYAxisSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZAxisSource'",NULL);
#endif
  {
   self->setZAxisSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setWAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWAxisSource'",NULL);
#endif
  {
   self->setWAxisSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUAxisSource'",NULL);
#endif
  {
   self->setUAxisSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVAxisSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVAxisSource'",NULL);
#endif
  {
   self->setVAxisSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setSource00
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CImplicitTranslateDomain */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CImplicitTranslateDomain_setSource01
static int tolua_bind_anl_anl_CImplicitTranslateDomain_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CImplicitTranslateDomain",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CImplicitTranslateDomain* self = (anl::CImplicitTranslateDomain*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CImplicitTranslateDomain_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_new00
static int tolua_bind_anl_anl_CRGBABlend_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBABlend* tolua_ret = (anl::CRGBABlend*)  new anl::CRGBABlend();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBABlend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_new00_local
static int tolua_bind_anl_anl_CRGBABlend_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBABlend* tolua_ret = (anl::CRGBABlend*)  new anl::CRGBABlend();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBABlend");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_delete00
static int tolua_bind_anl_anl_CRGBABlend_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_setLowSource00
static int tolua_bind_anl_anl_CRGBABlend_setLowSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLowSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_setHighSource00
static int tolua_bind_anl_anl_CRGBABlend_setHighSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_setLowSource01
static int tolua_bind_anl_anl_CRGBABlend_setLowSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlend_setLowSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_setHighSource01
static int tolua_bind_anl_anl_CRGBABlend_setHighSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlend_setHighSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_setControlSource00
static int tolua_bind_anl_anl_CRGBABlend_setControlSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setControlSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CRGBABlend */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlend_setControlSource01
static int tolua_bind_anl_anl_CRGBABlend_setControlSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlend",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBABlend* self = (anl::CRGBABlend*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlend_setControlSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_new00
static int tolua_bind_anl_anl_CRGBABlendOps_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBABlendOps* tolua_ret = (anl::CRGBABlendOps*)  new anl::CRGBABlendOps();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBABlendOps");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_new00_local
static int tolua_bind_anl_anl_CRGBABlendOps_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBABlendOps* tolua_ret = (anl::CRGBABlendOps*)  new anl::CRGBABlendOps();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBABlendOps");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_new01
static int tolua_bind_anl_anl_CRGBABlendOps_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int src1mode = ((int)  tolua_tonumber(tolua_S,2,0));
  int src2mode = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CRGBABlendOps* tolua_ret = (anl::CRGBABlendOps*)  new anl::CRGBABlendOps(src1mode,src2mode);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBABlendOps");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlendOps_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_new01_local
static int tolua_bind_anl_anl_CRGBABlendOps_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int src1mode = ((int)  tolua_tonumber(tolua_S,2,0));
  int src2mode = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CRGBABlendOps* tolua_ret = (anl::CRGBABlendOps*)  new anl::CRGBABlendOps(src1mode,src2mode);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBABlendOps");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlendOps_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_delete00
static int tolua_bind_anl_anl_CRGBABlendOps_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSrc1Mode of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_setSrc1Mode00
static int tolua_bind_anl_anl_CRGBABlendOps_setSrc1Mode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSrc1Mode'",NULL);
#endif
  {
   self->setSrc1Mode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSrc1Mode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSrc2Mode of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_setSrc2Mode00
static int tolua_bind_anl_anl_CRGBABlendOps_setSrc2Mode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSrc2Mode'",NULL);
#endif
  {
   self->setSrc2Mode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSrc2Mode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource1 of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_setSource100
static int tolua_bind_anl_anl_CRGBABlendOps_setSource100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource1'",NULL);
#endif
  {
   self->setSource1(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource2 of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_setSource200
static int tolua_bind_anl_anl_CRGBABlendOps_setSource200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource2'",NULL);
#endif
  {
   self->setSource2(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource1 of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_setSource101
static int tolua_bind_anl_anl_CRGBABlendOps_setSource101(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource1'",NULL);
#endif
  {
   self->setSource1(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlendOps_setSource100(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource2 of class  anl::CRGBABlendOps */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBABlendOps_setSource201
static int tolua_bind_anl_anl_CRGBABlendOps_setSource201(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBABlendOps",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBABlendOps* self = (anl::CRGBABlendOps*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource2'",NULL);
#endif
  {
   self->setSource2(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBABlendOps_setSource200(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_new00
static int tolua_bind_anl_anl_CRGBACompositeChannels_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBACompositeChannels* tolua_ret = (anl::CRGBACompositeChannels*)  new anl::CRGBACompositeChannels();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBACompositeChannels");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_new00_local
static int tolua_bind_anl_anl_CRGBACompositeChannels_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBACompositeChannels* tolua_ret = (anl::CRGBACompositeChannels*)  new anl::CRGBACompositeChannels();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBACompositeChannels");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_new01
static int tolua_bind_anl_anl_CRGBACompositeChannels_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CRGBACompositeChannels* tolua_ret = (anl::CRGBACompositeChannels*)  new anl::CRGBACompositeChannels(mode);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBACompositeChannels");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_new01_local
static int tolua_bind_anl_anl_CRGBACompositeChannels_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   anl::CRGBACompositeChannels* tolua_ret = (anl::CRGBACompositeChannels*)  new anl::CRGBACompositeChannels(mode);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBACompositeChannels");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_delete00
static int tolua_bind_anl_anl_CRGBACompositeChannels_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMode of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setMode00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMode'",NULL);
#endif
  {
   self->setMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRedSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRedSource'",NULL);
#endif
  {
   self->setRedSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRedSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGreenSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGreenSource'",NULL);
#endif
  {
   self->setGreenSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGreenSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlueSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlueSource'",NULL);
#endif
  {
   self->setBlueSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlueSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHueSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHueSource'",NULL);
#endif
  {
   self->setHueSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHueSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSatSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSatSource'",NULL);
#endif
  {
   self->setSatSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSatSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setValSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setValSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValSource'",NULL);
#endif
  {
   self->setValSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setValSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlphaSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource00
static int tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlphaSource'",NULL);
#endif
  {
   self->setAlphaSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlphaSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRedSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double r = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRedSource'",NULL);
#endif
  {
   self->setRedSource(r);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGreenSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double g = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGreenSource'",NULL);
#endif
  {
   self->setGreenSource(g);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlueSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double b = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlueSource'",NULL);
#endif
  {
   self->setBlueSource(b);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlphaSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double a = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlphaSource'",NULL);
#endif
  {
   self->setAlphaSource(a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHueSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double h = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHueSource'",NULL);
#endif
  {
   self->setHueSource(h);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSatSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double s = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSatSource'",NULL);
#endif
  {
   self->setSatSource(s);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setValSource of class  anl::CRGBACompositeChannels */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBACompositeChannels_setValSource01
static int tolua_bind_anl_anl_CRGBACompositeChannels_setValSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBACompositeChannels",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBACompositeChannels* self = (anl::CRGBACompositeChannels*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setValSource'",NULL);
#endif
  {
   self->setValSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBACompositeChannels_setValSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_new00
static int tolua_bind_anl_anl_CRGBAConstant_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBAConstant* tolua_ret = (anl::CRGBAConstant*)  new anl::CRGBAConstant();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBAConstant");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_new00_local
static int tolua_bind_anl_anl_CRGBAConstant_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBAConstant* tolua_ret = (anl::CRGBAConstant*)  new anl::CRGBAConstant();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBAConstant");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_new01
static int tolua_bind_anl_anl_CRGBAConstant_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::SRGBA* r = ((anl::SRGBA*)  tolua_tousertype(tolua_S,2,0));
  {
   anl::CRGBAConstant* tolua_ret = (anl::CRGBAConstant*)  new anl::CRGBAConstant(*r);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBAConstant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAConstant_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_new01_local
static int tolua_bind_anl_anl_CRGBAConstant_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::SRGBA* r = ((anl::SRGBA*)  tolua_tousertype(tolua_S,2,0));
  {
   anl::CRGBAConstant* tolua_ret = (anl::CRGBAConstant*)  new anl::CRGBAConstant(*r);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBAConstant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAConstant_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_new02
static int tolua_bind_anl_anl_CRGBAConstant_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   anl::CRGBAConstant* tolua_ret = (anl::CRGBAConstant*)  new anl::CRGBAConstant(r,g,b,a);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBAConstant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAConstant_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_new02_local
static int tolua_bind_anl_anl_CRGBAConstant_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   anl::CRGBAConstant* tolua_ret = (anl::CRGBAConstant*)  new anl::CRGBAConstant(r,g,b,a);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBAConstant");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAConstant_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_delete00
static int tolua_bind_anl_anl_CRGBAConstant_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAConstant* self = (anl::CRGBAConstant*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_set00
static int tolua_bind_anl_anl_CRGBAConstant_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAConstant* self = (anl::CRGBAConstant*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
  {
   self->set(r,g,b,a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  anl::CRGBAConstant */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAConstant_set01
static int tolua_bind_anl_anl_CRGBAConstant_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAConstant",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBAConstant* self = (anl::CRGBAConstant*)  tolua_tousertype(tolua_S,1,0);
  anl::SRGBA* r = ((anl::SRGBA*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
  {
   self->set(*r);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAConstant_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBAHSVToRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAHSVToRGBA_new00
static int tolua_bind_anl_anl_CRGBAHSVToRGBA_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAHSVToRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBAHSVToRGBA* tolua_ret = (anl::CRGBAHSVToRGBA*)  new anl::CRGBAHSVToRGBA();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBAHSVToRGBA");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBAHSVToRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAHSVToRGBA_new00_local
static int tolua_bind_anl_anl_CRGBAHSVToRGBA_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAHSVToRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBAHSVToRGBA* tolua_ret = (anl::CRGBAHSVToRGBA*)  new anl::CRGBAHSVToRGBA();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBAHSVToRGBA");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBAHSVToRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource00
static int tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAHSVToRGBA",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAHSVToRGBA* self = (anl::CRGBAHSVToRGBA*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBAHSVToRGBA */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource01
static int tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAHSVToRGBA",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBAHSVToRGBA* self = (anl::CRGBAHSVToRGBA*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBAImplicitGrayscale */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00
static int tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAImplicitGrayscale",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBAImplicitGrayscale* tolua_ret = (anl::CRGBAImplicitGrayscale*)  new anl::CRGBAImplicitGrayscale();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBAImplicitGrayscale");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBAImplicitGrayscale */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00_local
static int tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBAImplicitGrayscale",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBAImplicitGrayscale* tolua_ret = (anl::CRGBAImplicitGrayscale*)  new anl::CRGBAImplicitGrayscale();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBAImplicitGrayscale");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CRGBAImplicitGrayscale */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAImplicitGrayscale_delete00
static int tolua_bind_anl_anl_CRGBAImplicitGrayscale_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAImplicitGrayscale",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAImplicitGrayscale* self = (anl::CRGBAImplicitGrayscale*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBAImplicitGrayscale */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBAImplicitGrayscale_setSource00
static int tolua_bind_anl_anl_CRGBAImplicitGrayscale_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBAImplicitGrayscale",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBAImplicitGrayscale* self = (anl::CRGBAImplicitGrayscale*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBANormalize */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBANormalize_new00
static int tolua_bind_anl_anl_CRGBANormalize_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBANormalize",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBANormalize* tolua_ret = (anl::CRGBANormalize*)  new anl::CRGBANormalize();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBANormalize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBANormalize */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBANormalize_new00_local
static int tolua_bind_anl_anl_CRGBANormalize_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBANormalize",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBANormalize* tolua_ret = (anl::CRGBANormalize*)  new anl::CRGBANormalize();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBANormalize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::CRGBANormalize */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBANormalize_delete00
static int tolua_bind_anl_anl_CRGBANormalize_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBANormalize",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBANormalize* self = (anl::CRGBANormalize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBANormalize */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBANormalize_setSource00
static int tolua_bind_anl_anl_CRGBANormalize_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBANormalize",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBANormalize* self = (anl::CRGBANormalize*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBANormalize */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBANormalize_setSource01
static int tolua_bind_anl_anl_CRGBANormalize_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBANormalize",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBANormalize* self = (anl::CRGBANormalize*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBANormalize_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBARGBAToHSV */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARGBAToHSV_new00
static int tolua_bind_anl_anl_CRGBARGBAToHSV_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBARGBAToHSV",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBARGBAToHSV* tolua_ret = (anl::CRGBARGBAToHSV*)  new anl::CRGBARGBAToHSV();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBARGBAToHSV");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBARGBAToHSV */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARGBAToHSV_new00_local
static int tolua_bind_anl_anl_CRGBARGBAToHSV_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBARGBAToHSV",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBARGBAToHSV* tolua_ret = (anl::CRGBARGBAToHSV*)  new anl::CRGBARGBAToHSV();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBARGBAToHSV");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBARGBAToHSV */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARGBAToHSV_setSource00
static int tolua_bind_anl_anl_CRGBARGBAToHSV_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARGBAToHSV",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARGBAToHSV* self = (anl::CRGBARGBAToHSV*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBARGBAToHSV */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARGBAToHSV_setSource01
static int tolua_bind_anl_anl_CRGBARGBAToHSV_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARGBAToHSV",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARGBAToHSV* self = (anl::CRGBARGBAToHSV*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARGBAToHSV_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_new00
static int tolua_bind_anl_anl_CRGBARotateColor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBARotateColor* tolua_ret = (anl::CRGBARotateColor*)  new anl::CRGBARotateColor();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBARotateColor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_new00_local
static int tolua_bind_anl_anl_CRGBARotateColor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBARotateColor* tolua_ret = (anl::CRGBARotateColor*)  new anl::CRGBARotateColor();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBARotateColor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxis of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxis00
static int tolua_bind_anl_anl_CRGBARotateColor_setAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
  double ay = ((double)  tolua_tonumber(tolua_S,3,0));
  double az = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxis'",NULL);
#endif
  {
   self->setAxis(ax,ay,az);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxis of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxis01
static int tolua_bind_anl_anl_CRGBARotateColor_setAxis01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* ax = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
  anl::CImplicitModuleBase* ay = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::CImplicitModuleBase* az = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxis'",NULL);
#endif
  {
   self->setAxis(ax,ay,az);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARotateColor_setAxis00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisX of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxisX00
static int tolua_bind_anl_anl_CRGBARotateColor_setAxisX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  double ax = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisX'",NULL);
#endif
  {
   self->setAxisX(ax);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxisX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisY of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxisY00
static int tolua_bind_anl_anl_CRGBARotateColor_setAxisY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  double ay = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisY'",NULL);
#endif
  {
   self->setAxisY(ay);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxisY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisZ of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxisZ00
static int tolua_bind_anl_anl_CRGBARotateColor_setAxisZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  double az = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisZ'",NULL);
#endif
  {
   self->setAxisZ(az);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAxisZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisX of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxisX01
static int tolua_bind_anl_anl_CRGBARotateColor_setAxisX01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* ax = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisX'",NULL);
#endif
  {
   self->setAxisX(ax);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARotateColor_setAxisX00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisY of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxisY01
static int tolua_bind_anl_anl_CRGBARotateColor_setAxisY01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* ay = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisY'",NULL);
#endif
  {
   self->setAxisY(ay);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARotateColor_setAxisY00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAxisZ of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAxisZ01
static int tolua_bind_anl_anl_CRGBARotateColor_setAxisZ01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* az = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAxisZ'",NULL);
#endif
  {
   self->setAxisZ(az);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARotateColor_setAxisZ00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalizeAxis of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setNormalizeAxis00
static int tolua_bind_anl_anl_CRGBARotateColor_setNormalizeAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  bool n = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalizeAxis'",NULL);
#endif
  {
   self->setNormalizeAxis(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalizeAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAngle00
static int tolua_bind_anl_anl_CRGBARotateColor_setAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  double a = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'",NULL);
#endif
  {
   self->setAngle(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setAngle01
static int tolua_bind_anl_anl_CRGBARotateColor_setAngle01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* a = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'",NULL);
#endif
  {
   self->setAngle(a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARotateColor_setAngle00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setSource00
static int tolua_bind_anl_anl_CRGBARotateColor_setSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSource of class  anl::CRGBARotateColor */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBARotateColor_setSource01
static int tolua_bind_anl_anl_CRGBARotateColor_setSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBARotateColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBARotateColor* self = (anl::CRGBARotateColor*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSource'",NULL);
#endif
  {
   self->setSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBARotateColor_setSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_new00
static int tolua_bind_anl_anl_CRGBASelect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBASelect* tolua_ret = (anl::CRGBASelect*)  new anl::CRGBASelect();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBASelect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_new00_local
static int tolua_bind_anl_anl_CRGBASelect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::CRGBASelect* tolua_ret = (anl::CRGBASelect*)  new anl::CRGBASelect();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBASelect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_new01
static int tolua_bind_anl_anl_CRGBASelect_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double thresh = ((double)  tolua_tonumber(tolua_S,2,0));
  double fall = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CRGBASelect* tolua_ret = (anl::CRGBASelect*)  new anl::CRGBASelect(thresh,fall);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::CRGBASelect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_new01_local
static int tolua_bind_anl_anl_CRGBASelect_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double thresh = ((double)  tolua_tonumber(tolua_S,2,0));
  double fall = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   anl::CRGBASelect* tolua_ret = (anl::CRGBASelect*)  new anl::CRGBASelect(thresh,fall);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::CRGBASelect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setLowSource00
static int tolua_bind_anl_anl_CRGBASelect_setLowSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLowSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setHighSource00
static int tolua_bind_anl_anl_CRGBASelect_setHighSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHighSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLowSource of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setLowSource01
static int tolua_bind_anl_anl_CRGBASelect_setLowSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLowSource'",NULL);
#endif
  {
   self->setLowSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_setLowSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHighSource of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setHighSource01
static int tolua_bind_anl_anl_CRGBASelect_setHighSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
  float a = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHighSource'",NULL);
#endif
  {
   self->setHighSource(r,g,b,a);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_setHighSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setControlSource00
static int tolua_bind_anl_anl_CRGBASelect_setControlSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setControlSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThreshold of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setThreshold00
static int tolua_bind_anl_anl_CRGBASelect_setThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThreshold'",NULL);
#endif
  {
   self->setThreshold(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setThreshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFalloff of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setFalloff00
static int tolua_bind_anl_anl_CRGBASelect_setFalloff00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFalloff'",NULL);
#endif
  {
   self->setFalloff(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFalloff'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setControlSource of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setControlSource01
static int tolua_bind_anl_anl_CRGBASelect_setControlSource01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setControlSource'",NULL);
#endif
  {
   self->setControlSource(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_setControlSource00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThreshold of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setThreshold01
static int tolua_bind_anl_anl_CRGBASelect_setThreshold01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThreshold'",NULL);
#endif
  {
   self->setThreshold(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_setThreshold00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFalloff of class  anl::CRGBASelect */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_CRGBASelect_setFalloff01
static int tolua_bind_anl_anl_CRGBASelect_setFalloff01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::CRGBASelect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  anl::CRGBASelect* self = (anl::CRGBASelect*)  tolua_tousertype(tolua_S,1,0);
  double v = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFalloff'",NULL);
#endif
  {
   self->setFalloff(v);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_anl_anl_CRGBASelect_setFalloff00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapx0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_mapx0
static int tolua_get_anl__SMappingRanges_mapx0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapx0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapx0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapx0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_mapx0
static int tolua_set_anl__SMappingRanges_mapx0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapx0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapx0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapy0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_mapy0
static int tolua_get_anl__SMappingRanges_mapy0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapy0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapy0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapy0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_mapy0
static int tolua_set_anl__SMappingRanges_mapy0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapy0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapy0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapz0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_mapz0
static int tolua_get_anl__SMappingRanges_mapz0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapz0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapz0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapz0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_mapz0
static int tolua_set_anl__SMappingRanges_mapz0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapz0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapz0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapx1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_mapx1
static int tolua_get_anl__SMappingRanges_mapx1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapx1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapx1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapx1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_mapx1
static int tolua_set_anl__SMappingRanges_mapx1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapx1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapx1 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapy1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_mapy1
static int tolua_get_anl__SMappingRanges_mapy1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapy1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapy1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapy1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_mapy1
static int tolua_set_anl__SMappingRanges_mapy1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapy1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapy1 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: mapz1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_mapz1
static int tolua_get_anl__SMappingRanges_mapz1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapz1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->mapz1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: mapz1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_mapz1
static int tolua_set_anl__SMappingRanges_mapz1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'mapz1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->mapz1 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: loopx0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_loopx0
static int tolua_get_anl__SMappingRanges_loopx0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopx0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->loopx0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: loopx0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_loopx0
static int tolua_set_anl__SMappingRanges_loopx0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopx0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->loopx0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: loopy0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_loopy0
static int tolua_get_anl__SMappingRanges_loopy0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopy0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->loopy0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: loopy0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_loopy0
static int tolua_set_anl__SMappingRanges_loopy0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopy0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->loopy0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: loopz0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_loopz0
static int tolua_get_anl__SMappingRanges_loopz0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopz0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->loopz0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: loopz0 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_loopz0
static int tolua_set_anl__SMappingRanges_loopz0(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopz0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->loopz0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: loopx1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_loopx1
static int tolua_get_anl__SMappingRanges_loopx1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopx1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->loopx1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: loopx1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_loopx1
static int tolua_set_anl__SMappingRanges_loopx1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopx1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->loopx1 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: loopy1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_loopy1
static int tolua_get_anl__SMappingRanges_loopy1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopy1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->loopy1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: loopy1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_loopy1
static int tolua_set_anl__SMappingRanges_loopy1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopy1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->loopy1 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: loopz1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_get_anl__SMappingRanges_loopz1
static int tolua_get_anl__SMappingRanges_loopz1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopz1'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->loopz1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: loopz1 of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_set_anl__SMappingRanges_loopz1
static int tolua_set_anl__SMappingRanges_loopz1(lua_State* tolua_S)
{
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'loopz1'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->loopz1 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SMappingRanges_new00
static int tolua_bind_anl_anl_SMappingRanges_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::SMappingRanges* tolua_ret = (anl::SMappingRanges*)  new anl::SMappingRanges();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"anl::SMappingRanges");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SMappingRanges_new00_local
static int tolua_bind_anl_anl_SMappingRanges_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   anl::SMappingRanges* tolua_ret = (anl::SMappingRanges*)  new anl::SMappingRanges();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"anl::SMappingRanges");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  anl::SMappingRanges */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_SMappingRanges_delete00
static int tolua_bind_anl_anl_SMappingRanges_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  anl::SMappingRanges* self = (anl::SMappingRanges*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::map2D */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_map2D00
static int tolua_bind_anl_anl_map2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray2Dd",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int seamlessmode = ((int)  tolua_tonumber(tolua_S,1,0));
  CArray2Dd* a = ((CArray2Dd*)  tolua_tousertype(tolua_S,2,0));
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::SMappingRanges* ranges = ((anl::SMappingRanges*)  tolua_tousertype(tolua_S,4,0));
  double z = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   anl::map2D(seamlessmode,*a,*m,*ranges,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'map2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::map2DNoZ */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_map2DNoZ00
static int tolua_bind_anl_anl_map2DNoZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray2Dd",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int seamlessmode = ((int)  tolua_tonumber(tolua_S,1,0));
  CArray2Dd* a = ((CArray2Dd*)  tolua_tousertype(tolua_S,2,0));
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::SMappingRanges* ranges = ((anl::SMappingRanges*)  tolua_tousertype(tolua_S,4,0));
  {
   anl::map2DNoZ(seamlessmode,*a,*m,*ranges);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'map2DNoZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::map3D */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_map3D00
static int tolua_bind_anl_anl_map3D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray3Dd",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CImplicitModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int seamlessmode = ((int)  tolua_tonumber(tolua_S,1,0));
  CArray3Dd* a = ((CArray3Dd*)  tolua_tousertype(tolua_S,2,0));
  anl::CImplicitModuleBase* m = ((anl::CImplicitModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::SMappingRanges* ranges = ((anl::SMappingRanges*)  tolua_tousertype(tolua_S,4,0));
  {
   anl::map3D(seamlessmode,*a,*m,*ranges);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'map3D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::mapRGBA2D */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_mapRGBA2D00
static int tolua_bind_anl_anl_mapRGBA2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int seamlessmode = ((int)  tolua_tonumber(tolua_S,1,0));
  CArray2Drgba* a = ((CArray2Drgba*)  tolua_tousertype(tolua_S,2,0));
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::SMappingRanges* ranges = ((anl::SMappingRanges*)  tolua_tousertype(tolua_S,4,0));
  double z = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   anl::mapRGBA2D(seamlessmode,*a,*m,*ranges,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mapRGBA2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::mapRGBA2DNoZ */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_mapRGBA2DNoZ00
static int tolua_bind_anl_anl_mapRGBA2DNoZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int seamlessmode = ((int)  tolua_tonumber(tolua_S,1,0));
  CArray2Drgba* a = ((CArray2Drgba*)  tolua_tousertype(tolua_S,2,0));
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::SMappingRanges* ranges = ((anl::SMappingRanges*)  tolua_tousertype(tolua_S,4,0));
  {
   anl::mapRGBA2DNoZ(seamlessmode,*a,*m,*ranges);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mapRGBA2DNoZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::mapRGBA3D */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_mapRGBA3D00
static int tolua_bind_anl_anl_mapRGBA3D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"anl::CRGBAModuleBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SMappingRanges",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int seamlessmode = ((int)  tolua_tonumber(tolua_S,1,0));
  CArray3Drgba* a = ((CArray3Drgba*)  tolua_tousertype(tolua_S,2,0));
  anl::CRGBAModuleBase* m = ((anl::CRGBAModuleBase*)  tolua_tousertype(tolua_S,3,0));
  anl::SMappingRanges* ranges = ((anl::SMappingRanges*)  tolua_tousertype(tolua_S,4,0));
  {
   anl::mapRGBA3D(seamlessmode,*a,*m,*ranges);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mapRGBA3D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::saveDoubleArray */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_saveDoubleArray00
static int tolua_bind_anl_anl_saveDoubleArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* filename = ((char*)  tolua_tostring(tolua_S,1,0));
  CArray2Dd* array = ((CArray2Dd*)  tolua_tousertype(tolua_S,2,0));
  {
   anl::saveDoubleArray(filename,array);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saveDoubleArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: anl::saveRGBAArray */
#ifndef TOLUA_DISABLE_tolua_bind_anl_anl_saveRGBAArray00
static int tolua_bind_anl_anl_saveRGBAArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* filename = ((char*)  tolua_tostring(tolua_S,1,0));
  CArray2Drgba* array = ((CArray2Drgba*)  tolua_tousertype(tolua_S,2,0));
  {
   anl::saveRGBAArray(filename,array);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saveRGBAArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_new00
static int tolua_bind_anl_CArray2Dd_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray2Dd* tolua_ret = (CArray2Dd*)  new CArray2Dd();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray2Dd");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_new00_local
static int tolua_bind_anl_CArray2Dd_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray2Dd* tolua_ret = (CArray2Dd*)  new CArray2Dd();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray2Dd");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_new01
static int tolua_bind_anl_CArray2Dd_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   CArray2Dd* tolua_ret = (CArray2Dd*)  new CArray2Dd(w,h);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray2Dd");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray2Dd_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_new01_local
static int tolua_bind_anl_CArray2Dd_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   CArray2Dd* tolua_ret = (CArray2Dd*)  new CArray2Dd(w,h);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray2Dd");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray2Dd_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_delete00
static int tolua_bind_anl_CArray2Dd_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Dd* self = (CArray2Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: width of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_width00
static int tolua_bind_anl_CArray2Dd_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Dd* self = (CArray2Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'width'",NULL);
#endif
  {
   int tolua_ret = (int)  self->width();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: height of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_height00
static int tolua_bind_anl_CArray2Dd_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Dd* self = (CArray2Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'height'",NULL);
#endif
  {
   int tolua_ret = (int)  self->height();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_resize00
static int tolua_bind_anl_CArray2Dd_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Dd* self = (CArray2Dd*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
  {
   self->resize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_set00
static int tolua_bind_anl_CArray2Dd_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Dd* self = (CArray2Dd*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  double v = ((double)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
  {
   self->set(x,y,v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  CArray2Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Dd_get00
static int tolua_bind_anl_CArray2Dd_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Dd* self = (CArray2Dd*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_new00
static int tolua_bind_anl_CArray2Drgba_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray2Drgba* tolua_ret = (CArray2Drgba*)  new CArray2Drgba();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray2Drgba");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_new00_local
static int tolua_bind_anl_CArray2Drgba_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray2Drgba* tolua_ret = (CArray2Drgba*)  new CArray2Drgba();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray2Drgba");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_new01
static int tolua_bind_anl_CArray2Drgba_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   CArray2Drgba* tolua_ret = (CArray2Drgba*)  new CArray2Drgba(w,h);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray2Drgba");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray2Drgba_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_new01_local
static int tolua_bind_anl_CArray2Drgba_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   CArray2Drgba* tolua_ret = (CArray2Drgba*)  new CArray2Drgba(w,h);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray2Drgba");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray2Drgba_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_delete00
static int tolua_bind_anl_CArray2Drgba_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Drgba* self = (CArray2Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: width of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_width00
static int tolua_bind_anl_CArray2Drgba_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Drgba* self = (CArray2Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'width'",NULL);
#endif
  {
   int tolua_ret = (int)  self->width();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: height of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_height00
static int tolua_bind_anl_CArray2Drgba_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Drgba* self = (CArray2Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'height'",NULL);
#endif
  {
   int tolua_ret = (int)  self->height();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_resize00
static int tolua_bind_anl_CArray2Drgba_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Drgba* self = (CArray2Drgba*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
  {
   self->resize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_set00
static int tolua_bind_anl_CArray2Drgba_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Drgba* self = (CArray2Drgba*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  anl::SRGBA v = *((anl::SRGBA*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
  {
   self->set(x,y,v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  CArray2Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray2Drgba_get00
static int tolua_bind_anl_CArray2Drgba_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray2Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray2Drgba* self = (CArray2Drgba*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   anl::SRGBA tolua_ret = (anl::SRGBA)  self->get(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = new anl::SRGBA(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(anl::SRGBA));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_new00
static int tolua_bind_anl_CArray3Dd_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray3Dd* tolua_ret = (CArray3Dd*)  new CArray3Dd();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray3Dd");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_new00_local
static int tolua_bind_anl_CArray3Dd_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray3Dd* tolua_ret = (CArray3Dd*)  new CArray3Dd();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray3Dd");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_new01
static int tolua_bind_anl_CArray3Dd_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int d = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   CArray3Dd* tolua_ret = (CArray3Dd*)  new CArray3Dd(w,h,d);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray3Dd");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray3Dd_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_new01_local
static int tolua_bind_anl_CArray3Dd_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int d = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   CArray3Dd* tolua_ret = (CArray3Dd*)  new CArray3Dd(w,h,d);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray3Dd");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray3Dd_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_delete00
static int tolua_bind_anl_CArray3Dd_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: width of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_width00
static int tolua_bind_anl_CArray3Dd_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'width'",NULL);
#endif
  {
   int tolua_ret = (int)  self->width();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: height of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_height00
static int tolua_bind_anl_CArray3Dd_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'height'",NULL);
#endif
  {
   int tolua_ret = (int)  self->height();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: depth of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_depth00
static int tolua_bind_anl_CArray3Dd_depth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'depth'",NULL);
#endif
  {
   int tolua_ret = (int)  self->depth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'depth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_set00
static int tolua_bind_anl_CArray3Dd_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int z = ((int)  tolua_tonumber(tolua_S,4,0));
  double v = ((double)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
  {
   self->set(x,y,z,v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_get00
static int tolua_bind_anl_CArray3Dd_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int z = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get(x,y,z);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  CArray3Dd */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Dd_resize00
static int tolua_bind_anl_CArray3Dd_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Dd",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Dd* self = (CArray3Dd*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int d = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
  {
   self->resize(w,h,d);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_new00
static int tolua_bind_anl_CArray3Drgba_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray3Drgba* tolua_ret = (CArray3Drgba*)  new CArray3Drgba();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray3Drgba");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_new00_local
static int tolua_bind_anl_CArray3Drgba_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CArray3Drgba* tolua_ret = (CArray3Drgba*)  new CArray3Drgba();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray3Drgba");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_new01
static int tolua_bind_anl_CArray3Drgba_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int d = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   CArray3Drgba* tolua_ret = (CArray3Drgba*)  new CArray3Drgba(w,h,d);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"CArray3Drgba");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray3Drgba_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_new01_local
static int tolua_bind_anl_CArray3Drgba_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int d = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   CArray3Drgba* tolua_ret = (CArray3Drgba*)  new CArray3Drgba(w,h,d);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"CArray3Drgba");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_anl_CArray3Drgba_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_delete00
static int tolua_bind_anl_CArray3Drgba_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: width of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_width00
static int tolua_bind_anl_CArray3Drgba_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'width'",NULL);
#endif
  {
   int tolua_ret = (int)  self->width();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: height of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_height00
static int tolua_bind_anl_CArray3Drgba_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'height'",NULL);
#endif
  {
   int tolua_ret = (int)  self->height();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: depth of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_depth00
static int tolua_bind_anl_CArray3Drgba_depth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'depth'",NULL);
#endif
  {
   int tolua_ret = (int)  self->depth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'depth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_resize00
static int tolua_bind_anl_CArray3Drgba_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int d = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
  {
   self->resize(w,h,d);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_set00
static int tolua_bind_anl_CArray3Drgba_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"anl::SRGBA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int z = ((int)  tolua_tonumber(tolua_S,4,0));
  anl::SRGBA v = *((anl::SRGBA*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
  {
   self->set(x,y,z,v);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  CArray3Drgba */
#ifndef TOLUA_DISABLE_tolua_bind_anl_CArray3Drgba_get00
static int tolua_bind_anl_CArray3Drgba_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CArray3Drgba",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CArray3Drgba* self = (CArray3Drgba*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int z = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   anl::SRGBA tolua_ret = (anl::SRGBA)  self->get(x,y,z);
   {
#ifdef __cplusplus
    void* tolua_obj = new anl::SRGBA(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(anl::SRGBA));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"anl::SRGBA");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_anl_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"anl",0);
  tolua_beginmodule(tolua_S,"anl");
   tolua_constant(tolua_S,"SEAMLESS_NONE",anl::SEAMLESS_NONE);
   tolua_constant(tolua_S,"SEAMLESS_X",anl::SEAMLESS_X);
   tolua_constant(tolua_S,"SEAMLESS_Y",anl::SEAMLESS_Y);
   tolua_constant(tolua_S,"SEAMLESS_Z",anl::SEAMLESS_Z);
   tolua_constant(tolua_S,"SEAMLESS_XY",anl::SEAMLESS_XY);
   tolua_constant(tolua_S,"SEAMLESS_XZ",anl::SEAMLESS_XZ);
   tolua_constant(tolua_S,"SEAMLESS_YZ",anl::SEAMLESS_YZ);
   tolua_constant(tolua_S,"SEAMLESS_XYZ",anl::SEAMLESS_XYZ);
   tolua_constant(tolua_S,"VALUE",anl::VALUE);
   tolua_constant(tolua_S,"GRADIENT",anl::GRADIENT);
   tolua_constant(tolua_S,"GRADVAL",anl::GRADVAL);
   tolua_constant(tolua_S,"SIMPLEX",anl::SIMPLEX);
   tolua_constant(tolua_S,"WHITE",anl::WHITE);
   tolua_constant(tolua_S,"NONE",anl::NONE);
   tolua_constant(tolua_S,"LINEAR",anl::LINEAR);
   tolua_constant(tolua_S,"CUBIC",anl::CUBIC);
   tolua_constant(tolua_S,"QUINTIC",anl::QUINTIC);
   tolua_constant(tolua_S,"ADD",anl::ADD);
   tolua_constant(tolua_S,"MULT",anl::MULT);
   tolua_constant(tolua_S,"MAX",anl::MAX);
   tolua_constant(tolua_S,"MIN",anl::MIN);
   tolua_constant(tolua_S,"AVG",anl::AVG);
   tolua_constant(tolua_S,"FBM",anl::FBM);
   tolua_constant(tolua_S,"RIDGEDMULTI",anl::RIDGEDMULTI);
   tolua_constant(tolua_S,"BILLOW",anl::BILLOW);
   tolua_constant(tolua_S,"MULTI",anl::MULTI);
   tolua_constant(tolua_S,"HYBRIDMULTI",anl::HYBRIDMULTI);
   tolua_constant(tolua_S,"X_AXIS",anl::X_AXIS);
   tolua_constant(tolua_S,"Y_AXIS",anl::Y_AXIS);
   tolua_constant(tolua_S,"Z_AXIS",anl::Z_AXIS);
   tolua_constant(tolua_S,"W_AXIS",anl::W_AXIS);
   tolua_constant(tolua_S,"U_AXIS",anl::U_AXIS);
   tolua_constant(tolua_S,"V_AXIS",anl::V_AXIS);
   tolua_constant(tolua_S,"RGB",anl::RGB);
   tolua_constant(tolua_S,"HSV",anl::HSV);
   tolua_cclass(tolua_S,"CImplicitModuleBase","anl::CImplicitModuleBase","",NULL);
   tolua_beginmodule(tolua_S,"CImplicitModuleBase");
    tolua_function(tolua_S,"setSeed",tolua_bind_anl_anl_CImplicitModuleBase_setSeed00);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CImplicitModuleBase_get00);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CImplicitModuleBase_get01);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CImplicitModuleBase_get02);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CImplicitModuleBase_get03);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"SRGBA","anl::SRGBA","",tolua_collect_anl__SRGBA);
   #else
   tolua_cclass(tolua_S,"SRGBA","anl::SRGBA","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"SRGBA");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_SRGBA_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_SRGBA_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_SRGBA_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_SRGBA_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_SRGBA_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_SRGBA_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_SRGBA_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_SRGBA_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_SRGBA_new02_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_SRGBA_delete00);
    tolua_array(tolua_S,"rgba",tolua_get_bind_anl_anl_SRGBA_rgba,tolua_set_bind_anl_anl_SRGBA_rgba);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"CBasePRNG","anl::CBasePRNG","",NULL);
   tolua_beginmodule(tolua_S,"CBasePRNG");
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CBasePRNG_get00);
    tolua_function(tolua_S,"setSeed",tolua_bind_anl_anl_CBasePRNG_setSeed00);
    tolua_function(tolua_S,"setSeedTime",tolua_bind_anl_anl_CBasePRNG_setSeedTime00);
    tolua_function(tolua_S,"getTarget",tolua_bind_anl_anl_CBasePRNG_getTarget00);
    tolua_function(tolua_S,"getRange",tolua_bind_anl_anl_CBasePRNG_getRange00);
    tolua_function(tolua_S,"get01",tolua_bind_anl_anl_CBasePRNG_get0100);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"LCG","anl::LCG","anl::CBasePRNG",tolua_collect_anl__LCG);
   #else
   tolua_cclass(tolua_S,"LCG","anl::LCG","anl::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"LCG");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_LCG_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_LCG_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_LCG_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_LCG_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Xorshift","anl::Xorshift","anl::CBasePRNG",tolua_collect_anl__Xorshift);
   #else
   tolua_cclass(tolua_S,"Xorshift","anl::Xorshift","anl::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Xorshift");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_Xorshift_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_Xorshift_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_Xorshift_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_Xorshift_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_Xorshift_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_Xorshift_new01_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"MWC256","anl::MWC256","anl::CBasePRNG",tolua_collect_anl__MWC256);
   #else
   tolua_cclass(tolua_S,"MWC256","anl::MWC256","anl::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"MWC256");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_MWC256_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_MWC256_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_MWC256_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_MWC256_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CMWC4096","anl::CMWC4096","anl::CBasePRNG",tolua_collect_anl__CMWC4096);
   #else
   tolua_cclass(tolua_S,"CMWC4096","anl::CMWC4096","anl::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CMWC4096");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CMWC4096_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CMWC4096_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CMWC4096_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CMWC4096_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"KISS","anl::KISS","anl::CBasePRNG",tolua_collect_anl__KISS);
   #else
   tolua_cclass(tolua_S,"KISS","anl::KISS","anl::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"KISS");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_KISS_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_KISS_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_KISS_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_KISS_delete00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"CRGBAModuleBase","anl::CRGBAModuleBase","",NULL);
   tolua_beginmodule(tolua_S,"CRGBAModuleBase");
    tolua_function(tolua_S,"setSeed",tolua_bind_anl_anl_CRGBAModuleBase_setSeed00);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CRGBAModuleBase_get00);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CRGBAModuleBase_get01);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CRGBAModuleBase_get02);
    tolua_function(tolua_S,"get",tolua_bind_anl_anl_CRGBAModuleBase_get03);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitAutoCorrect","anl::CImplicitAutoCorrect","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitAutoCorrect);
   #else
   tolua_cclass(tolua_S,"CImplicitAutoCorrect","anl::CImplicitAutoCorrect","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitAutoCorrect");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitAutoCorrect_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitAutoCorrect_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitAutoCorrect_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitAutoCorrect_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitAutoCorrect_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitAutoCorrect_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitAutoCorrect_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitAutoCorrect_setSource00);
    tolua_function(tolua_S,"setRange",tolua_bind_anl_anl_CImplicitAutoCorrect_setRange00);
    tolua_function(tolua_S,"calculate",tolua_bind_anl_anl_CImplicitAutoCorrect_calculate00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitBasisFunction","anl::CImplicitBasisFunction","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitBasisFunction);
   #else
   tolua_cclass(tolua_S,"CImplicitBasisFunction","anl::CImplicitBasisFunction","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitBasisFunction");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitBasisFunction_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitBasisFunction_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitBasisFunction_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitBasisFunction_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitBasisFunction_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitBasisFunction_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitBasisFunction_delete00);
    tolua_function(tolua_S,"setType",tolua_bind_anl_anl_CImplicitBasisFunction_setType00);
    tolua_function(tolua_S,"setInterp",tolua_bind_anl_anl_CImplicitBasisFunction_setInterp00);
    tolua_function(tolua_S,"setRotationAngle",tolua_bind_anl_anl_CImplicitBasisFunction_setRotationAngle00);
    tolua_function(tolua_S,"setSeed",tolua_bind_anl_anl_CImplicitBasisFunction_setSeed00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitBias","anl::CImplicitBias","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitBias);
   #else
   tolua_cclass(tolua_S,"CImplicitBias","anl::CImplicitBias","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitBias");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitBias_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitBias_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitBias_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitBias_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitBias_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitBias_setSource01);
    tolua_function(tolua_S,"setBias",tolua_bind_anl_anl_CImplicitBias_setBias00);
    tolua_function(tolua_S,"setBias",tolua_bind_anl_anl_CImplicitBias_setBias01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitBlend","anl::CImplicitBlend","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitBlend);
   #else
   tolua_cclass(tolua_S,"CImplicitBlend","anl::CImplicitBlend","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitBlend");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitBlend_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitBlend_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitBlend_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitBlend_delete00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CImplicitBlend_setLowSource00);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CImplicitBlend_setHighSource00);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CImplicitBlend_setControlSource00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CImplicitBlend_setLowSource01);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CImplicitBlend_setHighSource01);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CImplicitBlend_setControlSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitBrightContrast","anl::CImplicitBrightContrast","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitBrightContrast);
   #else
   tolua_cclass(tolua_S,"CImplicitBrightContrast","anl::CImplicitBrightContrast","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitBrightContrast");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitBrightContrast_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitBrightContrast_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitBrightContrast_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitBrightContrast_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitBrightContrast_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitBrightContrast_setSource01);
    tolua_function(tolua_S,"setBrightness",tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness00);
    tolua_function(tolua_S,"setContrastThreshold",tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold00);
    tolua_function(tolua_S,"setContrastFactor",tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor00);
    tolua_function(tolua_S,"setBrightness",tolua_bind_anl_anl_CImplicitBrightContrast_setBrightness01);
    tolua_function(tolua_S,"setContrastThreshold",tolua_bind_anl_anl_CImplicitBrightContrast_setContrastThreshold01);
    tolua_function(tolua_S,"setContrastFactor",tolua_bind_anl_anl_CImplicitBrightContrast_setContrastFactor01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitCache","anl::CImplicitCache","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitCache);
   #else
   tolua_cclass(tolua_S,"CImplicitCache","anl::CImplicitCache","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitCache");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitCache_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitCache_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitCache_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitCache_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitCache_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitCache_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CCellularGenerator","anl::CCellularGenerator","",tolua_collect_anl__CCellularGenerator);
   #else
   tolua_cclass(tolua_S,"CCellularGenerator","anl::CCellularGenerator","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CCellularGenerator");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CCellularGenerator_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CCellularGenerator_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CCellularGenerator_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CCellularGenerator_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitCellular","anl::CImplicitCellular","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitCellular);
   #else
   tolua_cclass(tolua_S,"CImplicitCellular","anl::CImplicitCellular","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitCellular");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitCellular_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitCellular_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitCellular_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitCellular_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitCellular_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitCellular_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitCellular_delete00);
    tolua_function(tolua_S,"setCoefficients",tolua_bind_anl_anl_CImplicitCellular_setCoefficients00);
    tolua_function(tolua_S,"setCellularSource",tolua_bind_anl_anl_CImplicitCellular_setCellularSource00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitClamp","anl::CImplicitClamp","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitClamp);
   #else
   tolua_cclass(tolua_S,"CImplicitClamp","anl::CImplicitClamp","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitClamp");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitClamp_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitClamp_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitClamp_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitClamp_delete00);
    tolua_function(tolua_S,"setRange",tolua_bind_anl_anl_CImplicitClamp_setRange00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitClamp_setSource00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitCombiner","anl::CImplicitCombiner","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitCombiner);
   #else
   tolua_cclass(tolua_S,"CImplicitCombiner","anl::CImplicitCombiner","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitCombiner");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitCombiner_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitCombiner_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitCombiner_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitCombiner_delete00);
    tolua_function(tolua_S,"setType",tolua_bind_anl_anl_CImplicitCombiner_setType00);
    tolua_function(tolua_S,"clearAllSources",tolua_bind_anl_anl_CImplicitCombiner_clearAllSources00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitCombiner_setSource00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitConstant","anl::CImplicitConstant","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitConstant);
   #else
   tolua_cclass(tolua_S,"CImplicitConstant","anl::CImplicitConstant","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitConstant");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitConstant_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitConstant_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitConstant_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitConstant_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitConstant_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitConstant_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitConstant_delete00);
    tolua_function(tolua_S,"setConstant",tolua_bind_anl_anl_CImplicitConstant_setConstant00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitCos","anl::CImplicitCos","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitCos);
   #else
   tolua_cclass(tolua_S,"CImplicitCos","anl::CImplicitCos","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitCos");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitCos_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitCos_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitCos_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitCos_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitCos_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitCos_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitFloor","anl::CImplicitFloor","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitFloor);
   #else
   tolua_cclass(tolua_S,"CImplicitFloor","anl::CImplicitFloor","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitFloor");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitFloor_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitFloor_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitFloor_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitFloor_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitFloor_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitFloor_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitExtractRGBAChannel","anl::CImplicitExtractRGBAChannel","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitExtractRGBAChannel);
   #else
   tolua_cclass(tolua_S,"CImplicitExtractRGBAChannel","anl::CImplicitExtractRGBAChannel","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitExtractRGBAChannel");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setSource01);
    tolua_function(tolua_S,"setChannel",tolua_bind_anl_anl_CImplicitExtractRGBAChannel_setChannel00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitFractal","anl::CImplicitFractal","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitFractal);
   #else
   tolua_cclass(tolua_S,"CImplicitFractal","anl::CImplicitFractal","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitFractal");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitFractal_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitFractal_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitFractal_new00_local);
    tolua_function(tolua_S,"setNumOctaves",tolua_bind_anl_anl_CImplicitFractal_setNumOctaves00);
    tolua_function(tolua_S,"setFrequency",tolua_bind_anl_anl_CImplicitFractal_setFrequency00);
    tolua_function(tolua_S,"setLacunarity",tolua_bind_anl_anl_CImplicitFractal_setLacunarity00);
    tolua_function(tolua_S,"setGain",tolua_bind_anl_anl_CImplicitFractal_setGain00);
    tolua_function(tolua_S,"setOffset",tolua_bind_anl_anl_CImplicitFractal_setOffset00);
    tolua_function(tolua_S,"setH",tolua_bind_anl_anl_CImplicitFractal_setH00);
    tolua_function(tolua_S,"setType",tolua_bind_anl_anl_CImplicitFractal_setType00);
    tolua_function(tolua_S,"setAllSourceTypes",tolua_bind_anl_anl_CImplicitFractal_setAllSourceTypes00);
    tolua_function(tolua_S,"setSourceType",tolua_bind_anl_anl_CImplicitFractal_setSourceType00);
    tolua_function(tolua_S,"overrideSource",tolua_bind_anl_anl_CImplicitFractal_overrideSource00);
    tolua_function(tolua_S,"resetSource",tolua_bind_anl_anl_CImplicitFractal_resetSource00);
    tolua_function(tolua_S,"resetAllSources",tolua_bind_anl_anl_CImplicitFractal_resetAllSources00);
    tolua_function(tolua_S,"setSeed",tolua_bind_anl_anl_CImplicitFractal_setSeed00);
    tolua_function(tolua_S,"getBasis",tolua_bind_anl_anl_CImplicitFractal_getBasis00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitFunctionGradient","anl::CImplicitFunctionGradient","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitFunctionGradient);
   #else
   tolua_cclass(tolua_S,"CImplicitFunctionGradient","anl::CImplicitFunctionGradient","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitFunctionGradient");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitFunctionGradient_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitFunctionGradient_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitFunctionGradient_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitFunctionGradient_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitFunctionGradient_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitFunctionGradient_setSource01);
    tolua_function(tolua_S,"setAxis",tolua_bind_anl_anl_CImplicitFunctionGradient_setAxis00);
    tolua_function(tolua_S,"setSpacing",tolua_bind_anl_anl_CImplicitFunctionGradient_setSpacing00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitGain","anl::CImplicitGain","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitGain);
   #else
   tolua_cclass(tolua_S,"CImplicitGain","anl::CImplicitGain","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitGain");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitGain_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitGain_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitGain_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitGain_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitGain_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitGain_setSource01);
    tolua_function(tolua_S,"setGain",tolua_bind_anl_anl_CImplicitGain_setGain00);
    tolua_function(tolua_S,"setGain",tolua_bind_anl_anl_CImplicitGain_setGain01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitGradient","anl::CImplicitGradient","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitGradient);
   #else
   tolua_cclass(tolua_S,"CImplicitGradient","anl::CImplicitGradient","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitGradient");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitGradient_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitGradient_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitGradient_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitGradient_delete00);
    tolua_function(tolua_S,"setGradient",tolua_bind_anl_anl_CImplicitGradient_setGradient00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitRGBADotProduct","anl::CImplicitRGBADotProduct","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitRGBADotProduct);
   #else
   tolua_cclass(tolua_S,"CImplicitRGBADotProduct","anl::CImplicitRGBADotProduct","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitRGBADotProduct");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitRGBADotProduct_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitRGBADotProduct_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitRGBADotProduct_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitRGBADotProduct_delete00);
    tolua_function(tolua_S,"setSource1",tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource100);
    tolua_function(tolua_S,"setSource1",tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource101);
    tolua_function(tolua_S,"setSource2",tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource200);
    tolua_function(tolua_S,"setSource2",tolua_bind_anl_anl_CImplicitRGBADotProduct_setSource201);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitRotateDomain","anl::CImplicitRotateDomain","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitRotateDomain);
   #else
   tolua_cclass(tolua_S,"CImplicitRotateDomain","anl::CImplicitRotateDomain","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitRotateDomain");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitRotateDomain_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitRotateDomain_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitRotateDomain_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitRotateDomain_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitRotateDomain_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitRotateDomain_setSource01);
    tolua_function(tolua_S,"setAxis",tolua_bind_anl_anl_CImplicitRotateDomain_setAxis00);
    tolua_function(tolua_S,"setAxis",tolua_bind_anl_anl_CImplicitRotateDomain_setAxis01);
    tolua_function(tolua_S,"setAxisX",tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX00);
    tolua_function(tolua_S,"setAxisY",tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY00);
    tolua_function(tolua_S,"setAxisZ",tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ00);
    tolua_function(tolua_S,"setAxisX",tolua_bind_anl_anl_CImplicitRotateDomain_setAxisX01);
    tolua_function(tolua_S,"setAxisY",tolua_bind_anl_anl_CImplicitRotateDomain_setAxisY01);
    tolua_function(tolua_S,"setAxisZ",tolua_bind_anl_anl_CImplicitRotateDomain_setAxisZ01);
    tolua_function(tolua_S,"setAngle",tolua_bind_anl_anl_CImplicitRotateDomain_setAngle00);
    tolua_function(tolua_S,"setAngle",tolua_bind_anl_anl_CImplicitRotateDomain_setAngle01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitScaleDomain","anl::CImplicitScaleDomain","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitScaleDomain);
   #else
   tolua_cclass(tolua_S,"CImplicitScaleDomain","anl::CImplicitScaleDomain","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitScaleDomain");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitScaleDomain_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitScaleDomain_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitScaleDomain_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitScaleDomain_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitScaleDomain_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitScaleDomain_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitScaleDomain_delete00);
    tolua_function(tolua_S,"setScale",tolua_bind_anl_anl_CImplicitScaleDomain_setScale00);
    tolua_function(tolua_S,"setXScale",tolua_bind_anl_anl_CImplicitScaleDomain_setXScale00);
    tolua_function(tolua_S,"setYScale",tolua_bind_anl_anl_CImplicitScaleDomain_setYScale00);
    tolua_function(tolua_S,"setZScale",tolua_bind_anl_anl_CImplicitScaleDomain_setZScale00);
    tolua_function(tolua_S,"setWScale",tolua_bind_anl_anl_CImplicitScaleDomain_setWScale00);
    tolua_function(tolua_S,"setUScale",tolua_bind_anl_anl_CImplicitScaleDomain_setUScale00);
    tolua_function(tolua_S,"setVScale",tolua_bind_anl_anl_CImplicitScaleDomain_setVScale00);
    tolua_function(tolua_S,"setXScale",tolua_bind_anl_anl_CImplicitScaleDomain_setXScale01);
    tolua_function(tolua_S,"setYScale",tolua_bind_anl_anl_CImplicitScaleDomain_setYScale01);
    tolua_function(tolua_S,"setZScale",tolua_bind_anl_anl_CImplicitScaleDomain_setZScale01);
    tolua_function(tolua_S,"setWScale",tolua_bind_anl_anl_CImplicitScaleDomain_setWScale01);
    tolua_function(tolua_S,"setUScale",tolua_bind_anl_anl_CImplicitScaleDomain_setUScale01);
    tolua_function(tolua_S,"setVScale",tolua_bind_anl_anl_CImplicitScaleDomain_setVScale01);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitScaleDomain_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitScaleDomain_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitScaleOffset","anl::CImplicitScaleOffset","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitScaleOffset);
   #else
   tolua_cclass(tolua_S,"CImplicitScaleOffset","anl::CImplicitScaleOffset","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitScaleOffset");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitScaleOffset_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitScaleOffset_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitScaleOffset_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitScaleOffset_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitScaleOffset_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitScaleOffset_setSource01);
    tolua_function(tolua_S,"setScale",tolua_bind_anl_anl_CImplicitScaleOffset_setScale00);
    tolua_function(tolua_S,"setOffset",tolua_bind_anl_anl_CImplicitScaleOffset_setOffset00);
    tolua_function(tolua_S,"setScale",tolua_bind_anl_anl_CImplicitScaleOffset_setScale01);
    tolua_function(tolua_S,"setOffset",tolua_bind_anl_anl_CImplicitScaleOffset_setOffset01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitSelect","anl::CImplicitSelect","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitSelect);
   #else
   tolua_cclass(tolua_S,"CImplicitSelect","anl::CImplicitSelect","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitSelect");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitSelect_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitSelect_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitSelect_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitSelect_delete00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CImplicitSelect_setLowSource00);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CImplicitSelect_setHighSource00);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CImplicitSelect_setControlSource00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CImplicitSelect_setLowSource01);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CImplicitSelect_setHighSource01);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CImplicitSelect_setControlSource01);
    tolua_function(tolua_S,"setThreshold",tolua_bind_anl_anl_CImplicitSelect_setThreshold00);
    tolua_function(tolua_S,"setFalloff",tolua_bind_anl_anl_CImplicitSelect_setFalloff00);
    tolua_function(tolua_S,"setThreshold",tolua_bind_anl_anl_CImplicitSelect_setThreshold01);
    tolua_function(tolua_S,"setFalloff",tolua_bind_anl_anl_CImplicitSelect_setFalloff01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitSin","anl::CImplicitSin","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitSin);
   #else
   tolua_cclass(tolua_S,"CImplicitSin","anl::CImplicitSin","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitSin");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitSin_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitSin_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitSin_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitSin_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitSin_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitSin_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitSphere","anl::CImplicitSphere","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitSphere);
   #else
   tolua_cclass(tolua_S,"CImplicitSphere","anl::CImplicitSphere","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitSphere");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitSphere_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitSphere_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitSphere_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitSphere_delete00);
    tolua_function(tolua_S,"setCenter",tolua_bind_anl_anl_CImplicitSphere_setCenter00);
    tolua_function(tolua_S,"setCenterX",tolua_bind_anl_anl_CImplicitSphere_setCenterX00);
    tolua_function(tolua_S,"setCenterY",tolua_bind_anl_anl_CImplicitSphere_setCenterY00);
    tolua_function(tolua_S,"setCenterZ",tolua_bind_anl_anl_CImplicitSphere_setCenterZ00);
    tolua_function(tolua_S,"setCenterW",tolua_bind_anl_anl_CImplicitSphere_setCenterW00);
    tolua_function(tolua_S,"setCenterU",tolua_bind_anl_anl_CImplicitSphere_setCenterU00);
    tolua_function(tolua_S,"setCenterV",tolua_bind_anl_anl_CImplicitSphere_setCenterV00);
    tolua_function(tolua_S,"setCenterX",tolua_bind_anl_anl_CImplicitSphere_setCenterX01);
    tolua_function(tolua_S,"setCenterY",tolua_bind_anl_anl_CImplicitSphere_setCenterY01);
    tolua_function(tolua_S,"setCenterZ",tolua_bind_anl_anl_CImplicitSphere_setCenterZ01);
    tolua_function(tolua_S,"setCenterW",tolua_bind_anl_anl_CImplicitSphere_setCenterW01);
    tolua_function(tolua_S,"setCenterU",tolua_bind_anl_anl_CImplicitSphere_setCenterU01);
    tolua_function(tolua_S,"setCenterV",tolua_bind_anl_anl_CImplicitSphere_setCenterV01);
    tolua_function(tolua_S,"setRadius",tolua_bind_anl_anl_CImplicitSphere_setRadius00);
    tolua_function(tolua_S,"setRadius",tolua_bind_anl_anl_CImplicitSphere_setRadius01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitPow","anl::CImplicitPow","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitPow);
   #else
   tolua_cclass(tolua_S,"CImplicitPow","anl::CImplicitPow","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitPow");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitPow_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitPow_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitPow_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitPow_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitPow_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitPow_setSource01);
    tolua_function(tolua_S,"setPower",tolua_bind_anl_anl_CImplicitPow_setPower00);
    tolua_function(tolua_S,"setPower",tolua_bind_anl_anl_CImplicitPow_setPower01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitTiers","anl::CImplicitTiers","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitTiers);
   #else
   tolua_cclass(tolua_S,"CImplicitTiers","anl::CImplicitTiers","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitTiers");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitTiers_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitTiers_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitTiers_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitTiers_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitTiers_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitTiers_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitTiers_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitTiers_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitTiers_setSource01);
    tolua_function(tolua_S,"setNumTiers",tolua_bind_anl_anl_CImplicitTiers_setNumTiers00);
    tolua_function(tolua_S,"setSmooth",tolua_bind_anl_anl_CImplicitTiers_setSmooth00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CImplicitTranslateDomain","anl::CImplicitTranslateDomain","anl::CImplicitModuleBase",tolua_collect_anl__CImplicitTranslateDomain);
   #else
   tolua_cclass(tolua_S,"CImplicitTranslateDomain","anl::CImplicitTranslateDomain","anl::CImplicitModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CImplicitTranslateDomain");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CImplicitTranslateDomain_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CImplicitTranslateDomain_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CImplicitTranslateDomain_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CImplicitTranslateDomain_delete00);
    tolua_function(tolua_S,"setXAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource00);
    tolua_function(tolua_S,"setYAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource00);
    tolua_function(tolua_S,"setZAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource00);
    tolua_function(tolua_S,"setWAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource00);
    tolua_function(tolua_S,"setUAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource00);
    tolua_function(tolua_S,"setVAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource00);
    tolua_function(tolua_S,"setXAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setXAxisSource01);
    tolua_function(tolua_S,"setYAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setYAxisSource01);
    tolua_function(tolua_S,"setZAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setZAxisSource01);
    tolua_function(tolua_S,"setWAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setWAxisSource01);
    tolua_function(tolua_S,"setUAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setUAxisSource01);
    tolua_function(tolua_S,"setVAxisSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setVAxisSource01);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CImplicitTranslateDomain_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBABlend","anl::CRGBABlend","anl::CRGBAModuleBase",tolua_collect_anl__CRGBABlend);
   #else
   tolua_cclass(tolua_S,"CRGBABlend","anl::CRGBABlend","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBABlend");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBABlend_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBABlend_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBABlend_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CRGBABlend_delete00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CRGBABlend_setLowSource00);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CRGBABlend_setHighSource00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CRGBABlend_setLowSource01);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CRGBABlend_setHighSource01);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CRGBABlend_setControlSource00);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CRGBABlend_setControlSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBABlendOps","anl::CRGBABlendOps","anl::CRGBAModuleBase",tolua_collect_anl__CRGBABlendOps);
   #else
   tolua_cclass(tolua_S,"CRGBABlendOps","anl::CRGBABlendOps","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBABlendOps");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBABlendOps_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBABlendOps_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBABlendOps_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBABlendOps_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBABlendOps_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBABlendOps_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CRGBABlendOps_delete00);
    tolua_function(tolua_S,"setSrc1Mode",tolua_bind_anl_anl_CRGBABlendOps_setSrc1Mode00);
    tolua_function(tolua_S,"setSrc2Mode",tolua_bind_anl_anl_CRGBABlendOps_setSrc2Mode00);
    tolua_function(tolua_S,"setSource1",tolua_bind_anl_anl_CRGBABlendOps_setSource100);
    tolua_function(tolua_S,"setSource2",tolua_bind_anl_anl_CRGBABlendOps_setSource200);
    tolua_function(tolua_S,"setSource1",tolua_bind_anl_anl_CRGBABlendOps_setSource101);
    tolua_function(tolua_S,"setSource2",tolua_bind_anl_anl_CRGBABlendOps_setSource201);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBACompositeChannels","anl::CRGBACompositeChannels","anl::CRGBAModuleBase",tolua_collect_anl__CRGBACompositeChannels);
   #else
   tolua_cclass(tolua_S,"CRGBACompositeChannels","anl::CRGBACompositeChannels","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBACompositeChannels");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBACompositeChannels_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBACompositeChannels_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBACompositeChannels_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBACompositeChannels_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBACompositeChannels_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBACompositeChannels_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CRGBACompositeChannels_delete00);
    tolua_function(tolua_S,"setMode",tolua_bind_anl_anl_CRGBACompositeChannels_setMode00);
    tolua_function(tolua_S,"setRedSource",tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource00);
    tolua_function(tolua_S,"setGreenSource",tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource00);
    tolua_function(tolua_S,"setBlueSource",tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource00);
    tolua_function(tolua_S,"setHueSource",tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource00);
    tolua_function(tolua_S,"setSatSource",tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource00);
    tolua_function(tolua_S,"setValSource",tolua_bind_anl_anl_CRGBACompositeChannels_setValSource00);
    tolua_function(tolua_S,"setAlphaSource",tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource00);
    tolua_function(tolua_S,"setRedSource",tolua_bind_anl_anl_CRGBACompositeChannels_setRedSource01);
    tolua_function(tolua_S,"setGreenSource",tolua_bind_anl_anl_CRGBACompositeChannels_setGreenSource01);
    tolua_function(tolua_S,"setBlueSource",tolua_bind_anl_anl_CRGBACompositeChannels_setBlueSource01);
    tolua_function(tolua_S,"setAlphaSource",tolua_bind_anl_anl_CRGBACompositeChannels_setAlphaSource01);
    tolua_function(tolua_S,"setHueSource",tolua_bind_anl_anl_CRGBACompositeChannels_setHueSource01);
    tolua_function(tolua_S,"setSatSource",tolua_bind_anl_anl_CRGBACompositeChannels_setSatSource01);
    tolua_function(tolua_S,"setValSource",tolua_bind_anl_anl_CRGBACompositeChannels_setValSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBAConstant","anl::CRGBAConstant","anl::CRGBAModuleBase",tolua_collect_anl__CRGBAConstant);
   #else
   tolua_cclass(tolua_S,"CRGBAConstant","anl::CRGBAConstant","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBAConstant");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBAConstant_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBAConstant_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBAConstant_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBAConstant_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBAConstant_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBAConstant_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBAConstant_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBAConstant_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBAConstant_new02_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CRGBAConstant_delete00);
    tolua_function(tolua_S,"set",tolua_bind_anl_anl_CRGBAConstant_set00);
    tolua_function(tolua_S,"set",tolua_bind_anl_anl_CRGBAConstant_set01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBAHSVToRGBA","anl::CRGBAHSVToRGBA","anl::CRGBAModuleBase",tolua_collect_anl__CRGBAHSVToRGBA);
   #else
   tolua_cclass(tolua_S,"CRGBAHSVToRGBA","anl::CRGBAHSVToRGBA","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBAHSVToRGBA");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBAHSVToRGBA_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBAHSVToRGBA_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBAHSVToRGBA_new00_local);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBAHSVToRGBA_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBAImplicitGrayscale","anl::CRGBAImplicitGrayscale","anl::CRGBAModuleBase",tolua_collect_anl__CRGBAImplicitGrayscale);
   #else
   tolua_cclass(tolua_S,"CRGBAImplicitGrayscale","anl::CRGBAImplicitGrayscale","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBAImplicitGrayscale");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBAImplicitGrayscale_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CRGBAImplicitGrayscale_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBAImplicitGrayscale_setSource00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBANormalize","anl::CRGBANormalize","anl::CRGBAModuleBase",tolua_collect_anl__CRGBANormalize);
   #else
   tolua_cclass(tolua_S,"CRGBANormalize","anl::CRGBANormalize","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBANormalize");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBANormalize_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBANormalize_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBANormalize_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_CRGBANormalize_delete00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBANormalize_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBANormalize_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBARGBAToHSV","anl::CRGBARGBAToHSV","anl::CRGBAModuleBase",tolua_collect_anl__CRGBARGBAToHSV);
   #else
   tolua_cclass(tolua_S,"CRGBARGBAToHSV","anl::CRGBARGBAToHSV","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBARGBAToHSV");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBARGBAToHSV_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBARGBAToHSV_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBARGBAToHSV_new00_local);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBARGBAToHSV_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBARGBAToHSV_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBARotateColor","anl::CRGBARotateColor","anl::CRGBAModuleBase",tolua_collect_anl__CRGBARotateColor);
   #else
   tolua_cclass(tolua_S,"CRGBARotateColor","anl::CRGBARotateColor","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBARotateColor");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBARotateColor_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBARotateColor_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBARotateColor_new00_local);
    tolua_function(tolua_S,"setAxis",tolua_bind_anl_anl_CRGBARotateColor_setAxis00);
    tolua_function(tolua_S,"setAxis",tolua_bind_anl_anl_CRGBARotateColor_setAxis01);
    tolua_function(tolua_S,"setAxisX",tolua_bind_anl_anl_CRGBARotateColor_setAxisX00);
    tolua_function(tolua_S,"setAxisY",tolua_bind_anl_anl_CRGBARotateColor_setAxisY00);
    tolua_function(tolua_S,"setAxisZ",tolua_bind_anl_anl_CRGBARotateColor_setAxisZ00);
    tolua_function(tolua_S,"setAxisX",tolua_bind_anl_anl_CRGBARotateColor_setAxisX01);
    tolua_function(tolua_S,"setAxisY",tolua_bind_anl_anl_CRGBARotateColor_setAxisY01);
    tolua_function(tolua_S,"setAxisZ",tolua_bind_anl_anl_CRGBARotateColor_setAxisZ01);
    tolua_function(tolua_S,"setNormalizeAxis",tolua_bind_anl_anl_CRGBARotateColor_setNormalizeAxis00);
    tolua_function(tolua_S,"setAngle",tolua_bind_anl_anl_CRGBARotateColor_setAngle00);
    tolua_function(tolua_S,"setAngle",tolua_bind_anl_anl_CRGBARotateColor_setAngle01);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBARotateColor_setSource00);
    tolua_function(tolua_S,"setSource",tolua_bind_anl_anl_CRGBARotateColor_setSource01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CRGBASelect","anl::CRGBASelect","anl::CRGBAModuleBase",tolua_collect_anl__CRGBASelect);
   #else
   tolua_cclass(tolua_S,"CRGBASelect","anl::CRGBASelect","anl::CRGBAModuleBase",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CRGBASelect");
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBASelect_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBASelect_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBASelect_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_CRGBASelect_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_CRGBASelect_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_CRGBASelect_new01_local);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CRGBASelect_setLowSource00);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CRGBASelect_setHighSource00);
    tolua_function(tolua_S,"setLowSource",tolua_bind_anl_anl_CRGBASelect_setLowSource01);
    tolua_function(tolua_S,"setHighSource",tolua_bind_anl_anl_CRGBASelect_setHighSource01);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CRGBASelect_setControlSource00);
    tolua_function(tolua_S,"setThreshold",tolua_bind_anl_anl_CRGBASelect_setThreshold00);
    tolua_function(tolua_S,"setFalloff",tolua_bind_anl_anl_CRGBASelect_setFalloff00);
    tolua_function(tolua_S,"setControlSource",tolua_bind_anl_anl_CRGBASelect_setControlSource01);
    tolua_function(tolua_S,"setThreshold",tolua_bind_anl_anl_CRGBASelect_setThreshold01);
    tolua_function(tolua_S,"setFalloff",tolua_bind_anl_anl_CRGBASelect_setFalloff01);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"anl",0);
  tolua_beginmodule(tolua_S,"anl");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"SMappingRanges","anl::SMappingRanges","",tolua_collect_anl__SMappingRanges);
   #else
   tolua_cclass(tolua_S,"SMappingRanges","anl::SMappingRanges","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"SMappingRanges");
    tolua_variable(tolua_S,"mapx0",tolua_get_anl__SMappingRanges_mapx0,tolua_set_anl__SMappingRanges_mapx0);
    tolua_variable(tolua_S,"mapy0",tolua_get_anl__SMappingRanges_mapy0,tolua_set_anl__SMappingRanges_mapy0);
    tolua_variable(tolua_S,"mapz0",tolua_get_anl__SMappingRanges_mapz0,tolua_set_anl__SMappingRanges_mapz0);
    tolua_variable(tolua_S,"mapx1",tolua_get_anl__SMappingRanges_mapx1,tolua_set_anl__SMappingRanges_mapx1);
    tolua_variable(tolua_S,"mapy1",tolua_get_anl__SMappingRanges_mapy1,tolua_set_anl__SMappingRanges_mapy1);
    tolua_variable(tolua_S,"mapz1",tolua_get_anl__SMappingRanges_mapz1,tolua_set_anl__SMappingRanges_mapz1);
    tolua_variable(tolua_S,"loopx0",tolua_get_anl__SMappingRanges_loopx0,tolua_set_anl__SMappingRanges_loopx0);
    tolua_variable(tolua_S,"loopy0",tolua_get_anl__SMappingRanges_loopy0,tolua_set_anl__SMappingRanges_loopy0);
    tolua_variable(tolua_S,"loopz0",tolua_get_anl__SMappingRanges_loopz0,tolua_set_anl__SMappingRanges_loopz0);
    tolua_variable(tolua_S,"loopx1",tolua_get_anl__SMappingRanges_loopx1,tolua_set_anl__SMappingRanges_loopx1);
    tolua_variable(tolua_S,"loopy1",tolua_get_anl__SMappingRanges_loopy1,tolua_set_anl__SMappingRanges_loopy1);
    tolua_variable(tolua_S,"loopz1",tolua_get_anl__SMappingRanges_loopz1,tolua_set_anl__SMappingRanges_loopz1);
    tolua_function(tolua_S,"new",tolua_bind_anl_anl_SMappingRanges_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_anl_anl_SMappingRanges_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_anl_anl_SMappingRanges_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_anl_anl_SMappingRanges_delete00);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"map2D",tolua_bind_anl_anl_map2D00);
   tolua_function(tolua_S,"map2DNoZ",tolua_bind_anl_anl_map2DNoZ00);
   tolua_function(tolua_S,"map3D",tolua_bind_anl_anl_map3D00);
   tolua_function(tolua_S,"mapRGBA2D",tolua_bind_anl_anl_mapRGBA2D00);
   tolua_function(tolua_S,"mapRGBA2DNoZ",tolua_bind_anl_anl_mapRGBA2DNoZ00);
   tolua_function(tolua_S,"mapRGBA3D",tolua_bind_anl_anl_mapRGBA3D00);
   tolua_function(tolua_S,"saveDoubleArray",tolua_bind_anl_anl_saveDoubleArray00);
   tolua_function(tolua_S,"saveRGBAArray",tolua_bind_anl_anl_saveRGBAArray00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CArray2Dd","CArray2Dd","",tolua_collect_CArray2Dd);
  #else
  tolua_cclass(tolua_S,"CArray2Dd","CArray2Dd","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CArray2Dd");
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray2Dd_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray2Dd_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray2Dd_new00_local);
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray2Dd_new01);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray2Dd_new01_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray2Dd_new01_local);
   tolua_function(tolua_S,"delete",tolua_bind_anl_CArray2Dd_delete00);
   tolua_function(tolua_S,"width",tolua_bind_anl_CArray2Dd_width00);
   tolua_function(tolua_S,"height",tolua_bind_anl_CArray2Dd_height00);
   tolua_function(tolua_S,"resize",tolua_bind_anl_CArray2Dd_resize00);
   tolua_function(tolua_S,"set",tolua_bind_anl_CArray2Dd_set00);
   tolua_function(tolua_S,"get",tolua_bind_anl_CArray2Dd_get00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CArray2Drgba","CArray2Drgba","",tolua_collect_CArray2Drgba);
  #else
  tolua_cclass(tolua_S,"CArray2Drgba","CArray2Drgba","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CArray2Drgba");
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray2Drgba_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray2Drgba_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray2Drgba_new00_local);
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray2Drgba_new01);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray2Drgba_new01_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray2Drgba_new01_local);
   tolua_function(tolua_S,"delete",tolua_bind_anl_CArray2Drgba_delete00);
   tolua_function(tolua_S,"width",tolua_bind_anl_CArray2Drgba_width00);
   tolua_function(tolua_S,"height",tolua_bind_anl_CArray2Drgba_height00);
   tolua_function(tolua_S,"resize",tolua_bind_anl_CArray2Drgba_resize00);
   tolua_function(tolua_S,"set",tolua_bind_anl_CArray2Drgba_set00);
   tolua_function(tolua_S,"get",tolua_bind_anl_CArray2Drgba_get00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CArray3Dd","CArray3Dd","",tolua_collect_CArray3Dd);
  #else
  tolua_cclass(tolua_S,"CArray3Dd","CArray3Dd","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CArray3Dd");
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray3Dd_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray3Dd_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray3Dd_new00_local);
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray3Dd_new01);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray3Dd_new01_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray3Dd_new01_local);
   tolua_function(tolua_S,"delete",tolua_bind_anl_CArray3Dd_delete00);
   tolua_function(tolua_S,"width",tolua_bind_anl_CArray3Dd_width00);
   tolua_function(tolua_S,"height",tolua_bind_anl_CArray3Dd_height00);
   tolua_function(tolua_S,"depth",tolua_bind_anl_CArray3Dd_depth00);
   tolua_function(tolua_S,"set",tolua_bind_anl_CArray3Dd_set00);
   tolua_function(tolua_S,"get",tolua_bind_anl_CArray3Dd_get00);
   tolua_function(tolua_S,"resize",tolua_bind_anl_CArray3Dd_resize00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CArray3Drgba","CArray3Drgba","",tolua_collect_CArray3Drgba);
  #else
  tolua_cclass(tolua_S,"CArray3Drgba","CArray3Drgba","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CArray3Drgba");
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray3Drgba_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray3Drgba_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray3Drgba_new00_local);
   tolua_function(tolua_S,"new",tolua_bind_anl_CArray3Drgba_new01);
   tolua_function(tolua_S,"new_local",tolua_bind_anl_CArray3Drgba_new01_local);
   tolua_function(tolua_S,".call",tolua_bind_anl_CArray3Drgba_new01_local);
   tolua_function(tolua_S,"delete",tolua_bind_anl_CArray3Drgba_delete00);
   tolua_function(tolua_S,"width",tolua_bind_anl_CArray3Drgba_width00);
   tolua_function(tolua_S,"height",tolua_bind_anl_CArray3Drgba_height00);
   tolua_function(tolua_S,"depth",tolua_bind_anl_CArray3Drgba_depth00);
   tolua_function(tolua_S,"resize",tolua_bind_anl_CArray3Drgba_resize00);
   tolua_function(tolua_S,"set",tolua_bind_anl_CArray3Drgba_set00);
   tolua_function(tolua_S,"get",tolua_bind_anl_CArray3Drgba_get00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_anl (lua_State* tolua_S) {
 return tolua_bind_anl_open(tolua_S);
};
#endif

