// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDeviceState;
#ifdef LOGITECHWHEELPLUGIN_LogitechBPLibrary_generated_h
#error "LogitechBPLibrary.generated.h already included, missing '#pragma once' in LogitechBPLibrary.h"
#endif
#define LOGITECHWHEELPLUGIN_LogitechBPLibrary_generated_h

#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_SPARSE_DATA
#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWheelGetState); \
	DECLARE_FUNCTION(execWheelShutdown); \
	DECLARE_FUNCTION(execWheelPlayLeds); \
	DECLARE_FUNCTION(execWheelGetOperatingRange); \
	DECLARE_FUNCTION(execWheelSetOperatingRange); \
	DECLARE_FUNCTION(execWheelGetShifterMode); \
	DECLARE_FUNCTION(execWheelStopSoftstopForce); \
	DECLARE_FUNCTION(execWheelPlaySoftstopForce); \
	DECLARE_FUNCTION(execWheelStopCarAirborne); \
	DECLARE_FUNCTION(execWheelPlayCarAirborne); \
	DECLARE_FUNCTION(execWheelStopSurfaceEffect); \
	DECLARE_FUNCTION(execWheelPlaySurfaceEffect); \
	DECLARE_FUNCTION(execWheelStopSlipperyRoadEffect); \
	DECLARE_FUNCTION(execWheelPlaySlipperyRoadEffect); \
	DECLARE_FUNCTION(execWheelStopBumpyRoadEffect); \
	DECLARE_FUNCTION(execWheelPlayBumpyRoadEffect); \
	DECLARE_FUNCTION(execWheelStopDirtRoadEffect); \
	DECLARE_FUNCTION(execWheelPlayDirtRoadEffect); \
	DECLARE_FUNCTION(execWheelPlayFrontalCollisionForce); \
	DECLARE_FUNCTION(execWheelPlaySideCollisionForce); \
	DECLARE_FUNCTION(execWheelStopDamperForce); \
	DECLARE_FUNCTION(execWheelPlayDamperForce); \
	DECLARE_FUNCTION(execWheelStopConstantForce); \
	DECLARE_FUNCTION(execWheelPlayConstantForce); \
	DECLARE_FUNCTION(execWheelStopSpringForce); \
	DECLARE_FUNCTION(execWheelPlaySpringForce); \
	DECLARE_FUNCTION(execWheelIsPlaying); \
	DECLARE_FUNCTION(execWheelHasForceFeedback); \
	DECLARE_FUNCTION(execWheelGetNonLinearValue); \
	DECLARE_FUNCTION(execWheelGenerateNonLinearValues); \
	DECLARE_FUNCTION(execWheelButtonIsPressed); \
	DECLARE_FUNCTION(execWheelButtonReleased); \
	DECLARE_FUNCTION(execWheelButtonTriggered); \
	DECLARE_FUNCTION(execWheelIsModelConnected); \
	DECLARE_FUNCTION(execWheelIsManufacturerConnected); \
	DECLARE_FUNCTION(execWheelIsDeviceConnected); \
	DECLARE_FUNCTION(execWheelIsConnected); \
	DECLARE_FUNCTION(execWheelUpdate); \
	DECLARE_FUNCTION(execWheelInit);


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWheelGetState); \
	DECLARE_FUNCTION(execWheelShutdown); \
	DECLARE_FUNCTION(execWheelPlayLeds); \
	DECLARE_FUNCTION(execWheelGetOperatingRange); \
	DECLARE_FUNCTION(execWheelSetOperatingRange); \
	DECLARE_FUNCTION(execWheelGetShifterMode); \
	DECLARE_FUNCTION(execWheelStopSoftstopForce); \
	DECLARE_FUNCTION(execWheelPlaySoftstopForce); \
	DECLARE_FUNCTION(execWheelStopCarAirborne); \
	DECLARE_FUNCTION(execWheelPlayCarAirborne); \
	DECLARE_FUNCTION(execWheelStopSurfaceEffect); \
	DECLARE_FUNCTION(execWheelPlaySurfaceEffect); \
	DECLARE_FUNCTION(execWheelStopSlipperyRoadEffect); \
	DECLARE_FUNCTION(execWheelPlaySlipperyRoadEffect); \
	DECLARE_FUNCTION(execWheelStopBumpyRoadEffect); \
	DECLARE_FUNCTION(execWheelPlayBumpyRoadEffect); \
	DECLARE_FUNCTION(execWheelStopDirtRoadEffect); \
	DECLARE_FUNCTION(execWheelPlayDirtRoadEffect); \
	DECLARE_FUNCTION(execWheelPlayFrontalCollisionForce); \
	DECLARE_FUNCTION(execWheelPlaySideCollisionForce); \
	DECLARE_FUNCTION(execWheelStopDamperForce); \
	DECLARE_FUNCTION(execWheelPlayDamperForce); \
	DECLARE_FUNCTION(execWheelStopConstantForce); \
	DECLARE_FUNCTION(execWheelPlayConstantForce); \
	DECLARE_FUNCTION(execWheelStopSpringForce); \
	DECLARE_FUNCTION(execWheelPlaySpringForce); \
	DECLARE_FUNCTION(execWheelIsPlaying); \
	DECLARE_FUNCTION(execWheelHasForceFeedback); \
	DECLARE_FUNCTION(execWheelGetNonLinearValue); \
	DECLARE_FUNCTION(execWheelGenerateNonLinearValues); \
	DECLARE_FUNCTION(execWheelButtonIsPressed); \
	DECLARE_FUNCTION(execWheelButtonReleased); \
	DECLARE_FUNCTION(execWheelButtonTriggered); \
	DECLARE_FUNCTION(execWheelIsModelConnected); \
	DECLARE_FUNCTION(execWheelIsManufacturerConnected); \
	DECLARE_FUNCTION(execWheelIsDeviceConnected); \
	DECLARE_FUNCTION(execWheelIsConnected); \
	DECLARE_FUNCTION(execWheelUpdate); \
	DECLARE_FUNCTION(execWheelInit);


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogitechBPLibrary(); \
	friend struct Z_Construct_UClass_ULogitechBPLibrary_Statics; \
public: \
	DECLARE_CLASS(ULogitechBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogitechWheelPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULogitechBPLibrary)


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesULogitechBPLibrary(); \
	friend struct Z_Construct_UClass_ULogitechBPLibrary_Statics; \
public: \
	DECLARE_CLASS(ULogitechBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LogitechWheelPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULogitechBPLibrary)


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogitechBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogitechBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogitechBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogitechBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogitechBPLibrary(ULogitechBPLibrary&&); \
	NO_API ULogitechBPLibrary(const ULogitechBPLibrary&); \
public:


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogitechBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogitechBPLibrary(ULogitechBPLibrary&&); \
	NO_API ULogitechBPLibrary(const ULogitechBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogitechBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogitechBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogitechBPLibrary)


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_PRIVATE_PROPERTY_OFFSET
#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_31_PROLOG
#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_PRIVATE_PROPERTY_OFFSET \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_SPARSE_DATA \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_RPC_WRAPPERS \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_INCLASS \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_PRIVATE_PROPERTY_OFFSET \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_SPARSE_DATA \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_INCLASS_NO_PURE_DECLS \
	MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LogitechBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGITECHWHEELPLUGIN_API UClass* StaticClass<class ULogitechBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MomsDrift_Plugins_LogitechWheelPlugin_Source_LogitechWheelPlugin_Private_LogitechBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
