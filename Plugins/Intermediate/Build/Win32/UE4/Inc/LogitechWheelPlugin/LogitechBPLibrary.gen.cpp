// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogitechWheelPlugin/Private/LogitechBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogitechBPLibrary() {}
// Cross Module References
	LOGITECHWHEELPLUGIN_API UClass* Z_Construct_UClass_ULogitechBPLibrary_NoRegister();
	LOGITECHWHEELPLUGIN_API UClass* Z_Construct_UClass_ULogitechBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LogitechWheelPlugin();
	LOGITECHWHEELPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceState();
// End Cross Module References
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDeviceState*)Z_Param__Result=ULogitechBPLibrary::WheelGetState(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		ULogitechBPLibrary::WheelShutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayLeds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_currentRPM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rpmFirstLedTurnsOn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rpmRedLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayLeds(Z_Param_index,Z_Param_currentRPM,Z_Param_rpmFirstLedTurnsOn,Z_Param_rpmRedLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetOperatingRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelGetOperatingRange(Z_Param_index,Z_Param_Out_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelSetOperatingRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_range);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelSetOperatingRange(Z_Param_index,Z_Param_range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetShifterMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULogitechBPLibrary::WheelGetShifterMode(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSoftstopForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSoftstopForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySoftstopForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_usableRangePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySoftstopForce(Z_Param_index,Z_Param_usableRangePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopCarAirborne)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopCarAirborne(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayCarAirborne)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayCarAirborne(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSurfaceEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSurfaceEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySurfaceEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_period);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySurfaceEffect(Z_Param_index,Z_Param_type,Z_Param_magnitudePercentage,Z_Param_period);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSlipperyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSlipperyRoadEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySlipperyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySlipperyRoadEffect(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopBumpyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopBumpyRoadEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayBumpyRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayBumpyRoadEffect(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopDirtRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopDirtRoadEffect(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayDirtRoadEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayDirtRoadEffect(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayFrontalCollisionForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayFrontalCollisionForce(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySideCollisionForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySideCollisionForce(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopDamperForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopDamperForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayDamperForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_coefficientPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayDamperForce(Z_Param_index,Z_Param_coefficientPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopConstantForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopConstantForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlayConstantForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_magnitudePercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlayConstantForce(Z_Param_index,Z_Param_magnitudePercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelStopSpringForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelStopSpringForce(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelPlaySpringForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_offsetPercentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_saturationPercentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_coefficientPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelPlaySpringForce(Z_Param_index,Z_Param_offsetPercentage,Z_Param_saturationPercentage,Z_Param_coefficientPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsPlaying)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_forceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsPlaying(Z_Param_index,Z_Param_forceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelHasForceFeedback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelHasForceFeedback(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGetNonLinearValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_inputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULogitechBPLibrary::WheelGetNonLinearValue(Z_Param_index,Z_Param_inputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelGenerateNonLinearValues)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_nonLinCoeff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelGenerateNonLinearValues(Z_Param_index,Z_Param_nonLinCoeff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelButtonIsPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonNbr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelButtonIsPressed(Z_Param_index,Z_Param_buttonNbr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelButtonReleased)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonNbr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelButtonReleased(Z_Param_index,Z_Param_buttonNbr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelButtonTriggered)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonNbr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelButtonTriggered(Z_Param_index,Z_Param_buttonNbr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsModelConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_modelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsModelConnected(Z_Param_index,Z_Param_modelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsManufacturerConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_manufacturerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsManufacturerConnected(Z_Param_index,Z_Param_manufacturerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsDeviceConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsDeviceConnected(Z_Param_index,Z_Param_deviceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelIsConnected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelIsConnected(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULogitechBPLibrary::execWheelInit)
	{
		P_GET_UBOOL(Z_Param_ignoreXInputControllers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULogitechBPLibrary::WheelInit(Z_Param_ignoreXInputControllers);
		P_NATIVE_END;
	}
	void ULogitechBPLibrary::StaticRegisterNativesULogitechBPLibrary()
	{
		UClass* Class = ULogitechBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WheelButtonIsPressed", &ULogitechBPLibrary::execWheelButtonIsPressed },
			{ "WheelButtonReleased", &ULogitechBPLibrary::execWheelButtonReleased },
			{ "WheelButtonTriggered", &ULogitechBPLibrary::execWheelButtonTriggered },
			{ "WheelGenerateNonLinearValues", &ULogitechBPLibrary::execWheelGenerateNonLinearValues },
			{ "WheelGetNonLinearValue", &ULogitechBPLibrary::execWheelGetNonLinearValue },
			{ "WheelGetOperatingRange", &ULogitechBPLibrary::execWheelGetOperatingRange },
			{ "WheelGetShifterMode", &ULogitechBPLibrary::execWheelGetShifterMode },
			{ "WheelGetState", &ULogitechBPLibrary::execWheelGetState },
			{ "WheelHasForceFeedback", &ULogitechBPLibrary::execWheelHasForceFeedback },
			{ "WheelInit", &ULogitechBPLibrary::execWheelInit },
			{ "WheelIsConnected", &ULogitechBPLibrary::execWheelIsConnected },
			{ "WheelIsDeviceConnected", &ULogitechBPLibrary::execWheelIsDeviceConnected },
			{ "WheelIsManufacturerConnected", &ULogitechBPLibrary::execWheelIsManufacturerConnected },
			{ "WheelIsModelConnected", &ULogitechBPLibrary::execWheelIsModelConnected },
			{ "WheelIsPlaying", &ULogitechBPLibrary::execWheelIsPlaying },
			{ "WheelPlayBumpyRoadEffect", &ULogitechBPLibrary::execWheelPlayBumpyRoadEffect },
			{ "WheelPlayCarAirborne", &ULogitechBPLibrary::execWheelPlayCarAirborne },
			{ "WheelPlayConstantForce", &ULogitechBPLibrary::execWheelPlayConstantForce },
			{ "WheelPlayDamperForce", &ULogitechBPLibrary::execWheelPlayDamperForce },
			{ "WheelPlayDirtRoadEffect", &ULogitechBPLibrary::execWheelPlayDirtRoadEffect },
			{ "WheelPlayFrontalCollisionForce", &ULogitechBPLibrary::execWheelPlayFrontalCollisionForce },
			{ "WheelPlayLeds", &ULogitechBPLibrary::execWheelPlayLeds },
			{ "WheelPlaySideCollisionForce", &ULogitechBPLibrary::execWheelPlaySideCollisionForce },
			{ "WheelPlaySlipperyRoadEffect", &ULogitechBPLibrary::execWheelPlaySlipperyRoadEffect },
			{ "WheelPlaySoftstopForce", &ULogitechBPLibrary::execWheelPlaySoftstopForce },
			{ "WheelPlaySpringForce", &ULogitechBPLibrary::execWheelPlaySpringForce },
			{ "WheelPlaySurfaceEffect", &ULogitechBPLibrary::execWheelPlaySurfaceEffect },
			{ "WheelSetOperatingRange", &ULogitechBPLibrary::execWheelSetOperatingRange },
			{ "WheelShutdown", &ULogitechBPLibrary::execWheelShutdown },
			{ "WheelStopBumpyRoadEffect", &ULogitechBPLibrary::execWheelStopBumpyRoadEffect },
			{ "WheelStopCarAirborne", &ULogitechBPLibrary::execWheelStopCarAirborne },
			{ "WheelStopConstantForce", &ULogitechBPLibrary::execWheelStopConstantForce },
			{ "WheelStopDamperForce", &ULogitechBPLibrary::execWheelStopDamperForce },
			{ "WheelStopDirtRoadEffect", &ULogitechBPLibrary::execWheelStopDirtRoadEffect },
			{ "WheelStopSlipperyRoadEffect", &ULogitechBPLibrary::execWheelStopSlipperyRoadEffect },
			{ "WheelStopSoftstopForce", &ULogitechBPLibrary::execWheelStopSoftstopForce },
			{ "WheelStopSpringForce", &ULogitechBPLibrary::execWheelStopSpringForce },
			{ "WheelStopSurfaceEffect", &ULogitechBPLibrary::execWheelStopSurfaceEffect },
			{ "WheelUpdate", &ULogitechBPLibrary::execWheelUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics
	{
		struct LogitechBPLibrary_eventWheelButtonIsPressed_Parms
		{
			int32 index;
			int32 buttonNbr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonNbr_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_buttonNbr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonIsPressed_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr = { "buttonNbr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonIsPressed_Parms, buttonNbr), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelButtonIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelButtonIsPressed_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_buttonNbr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if on the device connected at index is currently being pressed the button specified\n" },
		{ "DisplayName", "Is Wheel Button Pressed" },
		{ "Keywords", "LogitechBPLibrary wheel steering button pressed" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if on the device connected at index is currently being pressed the button specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelButtonIsPressed", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelButtonIsPressed_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics
	{
		struct LogitechBPLibrary_eventWheelButtonReleased_Parms
		{
			int32 index;
			int32 buttonNbr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonNbr_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_buttonNbr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonReleased_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr = { "buttonNbr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonReleased_Parms, buttonNbr), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelButtonReleased_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelButtonReleased_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_buttonNbr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if on the device connected at index has been released the button specified\n" },
		{ "DisplayName", "Is Wheel Button Released" },
		{ "Keywords", "LogitechBPLibrary wheel steering button released" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if on the device connected at index has been released the button specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelButtonReleased", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelButtonReleased_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics
	{
		struct LogitechBPLibrary_eventWheelButtonTriggered_Parms
		{
			int32 index;
			int32 buttonNbr;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonNbr_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_buttonNbr;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonTriggered_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr = { "buttonNbr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelButtonTriggered_Parms, buttonNbr), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelButtonTriggered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelButtonTriggered_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_buttonNbr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if the device connected at index is currently triggering the button specified\n" },
		{ "DisplayName", "Is Wheel Button Triggered" },
		{ "Keywords", "LogitechBPLibrary wheel steering button triggered" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the device connected at index is currently triggering the button specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelButtonTriggered", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelButtonTriggered_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics
	{
		struct LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms
		{
			int32 index;
			int32 nonLinCoeff;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nonLinCoeff_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nonLinCoeff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff = { "nonLinCoeff", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms, nonLinCoeff), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_nonLinCoeff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The WheelGenerateNonLinearValues () function generate non-linear values for the game controller's axis.\n" },
		{ "DisplayName", "Wheel Generate Non Linear Values" },
		{ "Keywords", "LogitechBPLibrary wheel steering" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The WheelGenerateNonLinearValues () function generate non-linear values for the game controller's axis." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGenerateNonLinearValues", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelGenerateNonLinearValues_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics
	{
		struct LogitechBPLibrary_eventWheelGetNonLinearValue_Parms
		{
			int32 index;
			int32 inputValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_inputValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms, inputValue), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_inputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The WheelGetNonLinearValue () function returns a non-linear value from a table previously generated. This can be  used for the response of a steering wheel.\n" },
		{ "DisplayName", "Wheel Get Non Linear Values" },
		{ "Keywords", "LogitechBPLibrary wheel steering" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The WheelGetNonLinearValue () function returns a non-linear value from a table previously generated. This can be  used for the response of a steering wheel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetNonLinearValue", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelGetNonLinearValue_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics
	{
		struct LogitechBPLibrary_eventWheelGetOperatingRange_Parms
		{
			int32 index;
			int32 range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetOperatingRange_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetOperatingRange_Parms, range), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelGetOperatingRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelGetOperatingRange_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Fills the range parameter of the controller with the current controller operating range\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09range : integer to receive the current operating range \n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Get Wheel Operating Range" },
		{ "Keywords", "LogitechBPLibrary wheel steering operating range" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Fills the range parameter of the controller with the current controller operating range\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       range : integer to receive the current operating range\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetOperatingRange", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelGetOperatingRange_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics
	{
		struct LogitechBPLibrary_eventWheelGetShifterMode_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetShifterMode_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetShifterMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Gets current shifter mode (gated or sequential) \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09Return Value\n\x09\x09""1 if shifter is gated,  0 if shifter is sequential,  -1 if unknown \n\x09*/" },
		{ "DisplayName", "Get Wheel Shifter Mode" },
		{ "Keywords", "LogitechBPLibrary wheel steering shift mode" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Gets current shifter mode (gated or sequential)\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       Return Value\n               1 if shifter is gated,  0 if shifter is sequential,  -1 if unknown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetShifterMode", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelGetShifterMode_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics
	{
		struct LogitechBPLibrary_eventWheelGetState_Parms
		{
			int32 index;
			FDeviceState ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetState_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelGetState_Parms, ReturnValue), Z_Construct_UScriptStruct_FDeviceState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Returns the state of the controller\n" },
		{ "DisplayName", "Get Wheel State" },
		{ "Keywords", "LogitechBPLibrary wheel steering state" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Returns the state of the controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelGetState", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelGetState_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics
	{
		struct LogitechBPLibrary_eventWheelHasForceFeedback_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelHasForceFeedback_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelHasForceFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelHasForceFeedback_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Checks if the controller at index has force feedback\n" },
		{ "DisplayName", "Wheel Has Force Feedback" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the controller at index has force feedback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelHasForceFeedback", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelHasForceFeedback_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics
	{
		struct LogitechBPLibrary_eventWheelInit_Parms
		{
			bool ignoreXInputControllers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoreXInputControllers_MetaData[];
#endif
		static void NewProp_ignoreXInputControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignoreXInputControllers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelInit_Parms*)Obj)->ignoreXInputControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers = { "ignoreXInputControllers", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelInit_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelInit_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ignoreXInputControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The Wheel will automatically try to initialize\n" },
		{ "DisplayName", "Initialize Wheel" },
		{ "Keywords", "LogitechBPLibrary wheel steering initialize" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The Wheel will automatically try to initialize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelInit", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelInit_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsConnected_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsConnected_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//Returns whether a wheel is connected at the provided index. index 0 = first controller\n" },
		{ "DisplayName", "Is Wheel Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Returns whether a wheel is connected at the provided index. index 0 = first controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsConnected", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelIsConnected_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsDeviceConnected_Parms
		{
			int32 index;
			int32 deviceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_deviceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType = { "deviceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms, deviceType), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsDeviceConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_deviceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Returns whether a logitech device is connected at the provided index. index 0 = first controller. \n\x09""Device Types\n\x09\x09""0 = Wheel\n\x09\x09""1 = Joystick\n\x09\x09""2 = Gamepad\n\x09\x09""3 = Other\n\x09*/" },
		{ "DisplayName", "Is Logitech Device Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Returns whether a logitech device is connected at the provided index. index 0 = first controller.\n       Device Types\n               0 = Wheel\n               1 = Joystick\n               2 = Gamepad\n               3 = Other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsDeviceConnected", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelIsDeviceConnected_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms
		{
			int32 index;
			int32 manufacturerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manufacturerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_manufacturerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName = { "manufacturerName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms, manufacturerName), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_manufacturerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Checks if the device connected at index is made from the manufacturer specified by manufacturerName\n\x09Manufacturer Names\n\x09\x09""0 = Logitech\n\x09\x09""1 = Microsoft\n\x09\x09""2 = Other\n\x09*/" },
		{ "DisplayName", "Is Wheel Manufacturer Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the device connected at index is made from the manufacturer specified by manufacturerName\n       Manufacturer Names\n               0 = Logitech\n               1 = Microsoft\n               2 = Other" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsManufacturerConnected", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelIsManufacturerConnected_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics
	{
		struct LogitechBPLibrary_eventWheelIsModelConnected_Parms
		{
			int32 index;
			int32 modelName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_modelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsModelConnected_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName = { "modelName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsModelConnected_Parms, modelName), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsModelConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsModelConnected_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_modelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/* Checks if the device connected at index is the model specified.\n\x09Model Names\n\x09\x09""0 = G27\x09\x09\x09\x09\x09""5 = Driving Force Pro\x09\x09""10 = Force 3D Pro\x09\x09""15 = Strice Force 3D\x09""20 = Rumblepad 2\x09\x09\x09""25 = Chillstream\n\x09\x09""1 = Driving Force GT\x09""6 = Driving Force\x09\x09\x09""11 = Extreme 3D Pro\x09\x09""16 = G940 Joystick\x09\x09""21 = Cordless Rumblepad 2\x09""26 = G29\n\x09\x09""2 = G25\x09\x09\x09\x09\x09""7 = Nascar Racing Wheel\x09\x09""12 = Freedom 24\x09\x09\x09""17 = G940 Throttle\x09\x09""22 = Cordless Gamepad\x09\x09""27 = G920\n\x09\x09""3 = Momo Racing\x09\x09\x09""8 = Formula Force\x09\x09\x09""13 = Attack 3\x09\x09\x09""18 = G940 Pedals\x09\x09""23 = Dual Action Gamepad\x09\n\x09\x09""4 = Momo Force\x09\x09\x09""9 = Formula Force GP\x09\x09""14 = Force 3D\x09\x09\x09""19 = Rumblepad\x09\x09\x09""24 = Precision Gamepad 2\n\x09*/" },
		{ "DisplayName", "Is Wheel Model Connected" },
		{ "Keywords", "LogitechBPLibrary wheel steering connected model" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if the device connected at index is the model specified.\n      Model Names\n              0 = G27                                 5 = Driving Force Pro           10 = Force 3D Pro               15 = Strice Force 3D    20 = Rumblepad 2                        25 = Chillstream\n              1 = Driving Force GT    6 = Driving Force                       11 = Extreme 3D Pro             16 = G940 Joystick              21 = Cordless Rumblepad 2       26 = G29\n              2 = G25                                 7 = Nascar Racing Wheel         12 = Freedom 24                 17 = G940 Throttle              22 = Cordless Gamepad           27 = G920\n              3 = Momo Racing                 8 = Formula Force                       13 = Attack 3                   18 = G940 Pedals                23 = Dual Action Gamepad\n              4 = Momo Force                  9 = Formula Force GP            14 = Force 3D                   19 = Rumblepad                  24 = Precision Gamepad 2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsModelConnected", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelIsModelConnected_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics
	{
		struct LogitechBPLibrary_eventWheelIsPlaying_Parms
		{
			int32 index;
			int32 forceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_forceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsPlaying_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType = { "forceType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelIsPlaying_Parms, forceType), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelIsPlaying_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_forceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Checks if a certain force effect is currently playing. \n\n\x09True if the LogiIsPlaying device can do force feedback, false otherwise.\n\n\x09""Force Types\n\x09\x09""0 = Spring\x09\x09\x09\x09""5 = Dirt Road\n\x09\x09""1 = Constant\x09\x09\x09""6 = Bumpy Road\n\x09\x09""2 = Damper\x09\x09\x09\x09""7 = Slippery Road\n\x09\x09""3 = Side Collision\x09\x09""8 = Surface Effect\n\x09\x09""4 = Frontal Collision\x09""9 = Car Airborne\n\x09*/" },
		{ "DisplayName", "Wheel Is Playing" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback playing" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Checks if a certain force effect is currently playing.\n\n       True if the LogiIsPlaying device can do force feedback, false otherwise.\n\n       Force Types\n               0 = Spring                              5 = Dirt Road\n               1 = Constant                    6 = Bumpy Road\n               2 = Damper                              7 = Slippery Road\n               3 = Side Collision              8 = Surface Effect\n               4 = Frontal Collision   9 = Car Airborne" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelIsPlaying", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelIsPlaying_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the bumpy road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the bumpy road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Bumpy Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback bumpy road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the bumpy road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the bumpy road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayBumpyRoadEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayBumpyRoadEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayCarAirborne_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayCarAirborne_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayCarAirborne_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayCarAirborne_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the car airborne effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Car Airborne Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback airborne" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the car airborne effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayCarAirborne", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayCarAirborne_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayConstantForce_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayConstantForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayConstantForce_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayConstantForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayConstantForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the constant force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the constant force effect. A negative value reverses the direction of the force. \n\x09Valid ranges for magnitudePercentage are -100 to 100. Any values outside the valid range are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Constant Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback constant" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the constant force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the constant force effect. A negative value reverses the direction of the force.\n       Valid ranges for magnitudePercentage are -100 to 100. Any values outside the valid range are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayConstantForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayConstantForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayDamperForce_Parms
		{
			int32 index;
			int32 coefficientPercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coefficientPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_coefficientPercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDamperForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage = { "coefficientPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDamperForce_Parms, coefficientPercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayDamperForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayDamperForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_coefficientPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the damper force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09""coefficientPercentage : specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.  \n\x09Higher values mean that the saturation level is reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n\x09-100 simulates a very slippery effect, +100 makes the wheel/joystick very hard to move, simulating the car at a stop or in mud.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Damper Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback damper" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the damper force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       coefficientPercentage : specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.\n       Higher values mean that the saturation level is reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n       -100 simulates a very slippery effect, +100 makes the wheel/joystick very hard to move, simulating the car at a stop or in mud.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayDamperForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayDamperForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the dirt road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the dirt road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Dirt Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback dirt road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the dirt road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the dirt road effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayDirtRoadEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayDirtRoadEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the frontal collision force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : specifies the magnitude of the frontal collision force effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Frontal Collision Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback frontal collision" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the frontal collision force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : specifies the magnitude of the frontal collision force effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayFrontalCollisionForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayFrontalCollisionForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics
	{
		struct LogitechBPLibrary_eventWheelPlayLeds_Parms
		{
			int32 index;
			float currentRPM;
			float rpmFirstLedTurnsOn;
			float rpmRedLine;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rpmFirstLedTurnsOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rpmFirstLedTurnsOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rpmRedLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rpmRedLine;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM = { "currentRPM", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, currentRPM), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn = { "rpmFirstLedTurnsOn", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, rpmFirstLedTurnsOn), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine = { "rpmRedLine", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlayLeds_Parms, rpmRedLine), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlayLeds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlayLeds_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_currentRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmFirstLedTurnsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_rpmRedLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the leds on the controller\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09""currentRPM  : current RPM\n\n\x09rpmFirstLedTurnsOn : RPM when first LEDs are to turn on.\n\n\x09rpmRedLine : just below this RPM, all LEDs will be on. Just above,  all LEDs will start flashing.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel LEDS" },
		{ "Keywords", "LogitechBPLibrary wheel steering leds" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the leds on the controller\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       currentRPM  : current RPM\n\n       rpmFirstLedTurnsOn : RPM when first LEDs are to turn on.\n\n       rpmRedLine : just below this RPM, all LEDs will be on. Just above,  all LEDs will start flashing.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlayLeds", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlayLeds_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the side collision force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the side collision force effect. A negative value reverses the direction of the force. Valid ranges for magnitudePercentage are -100 to 100.\n\x09""Any values outside the valid range are silently clamped.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Side Collision Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback side collision" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the side collision force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the side collision force effect. A negative value reverses the direction of the force. Valid ranges for magnitudePercentage are -100 to 100.\n       Any values outside the valid range are silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySideCollisionForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlaySideCollisionForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms
		{
			int32 index;
			int32 magnitudePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the slippery road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09magnitudePercentage : Specifies the magnitude of the slippery road effect.  Valid ranges for magnitudePercentage are 0 to 100. 100 corresponds to the most slippery effect.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Slippery Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback slippery road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the slippery road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       magnitudePercentage : Specifies the magnitude of the slippery road effect.  Valid ranges for magnitudePercentage are 0 to 100. 100 corresponds to the most slippery effect.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySlipperyRoadEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlaySlipperyRoadEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms
		{
			int32 index;
			int32 usableRangePercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usableRangePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_usableRangePercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage = { "usableRangePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms, usableRangePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_usableRangePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the soft stop force. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09usableRangePercentage : specifies the deadband in percentage of the softstop force effect.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Soft Stop Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback soft stop" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the soft stop force.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       usableRangePercentage : specifies the deadband in percentage of the softstop force effect.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySoftstopForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlaySoftstopForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySpringForce_Parms
		{
			int32 index;
			int32 offsetPercentage;
			int32 saturationPercentage;
			int32 coefficientPercentage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offsetPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_offsetPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saturationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_saturationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coefficientPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_coefficientPercentage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage = { "offsetPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, offsetPercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage = { "saturationPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, saturationPercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage = { "coefficientPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySpringForce_Parms, coefficientPercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySpringForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySpringForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_offsetPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_saturationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_coefficientPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the spring force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09offsetPercentage: Specifies the center of the spring force effect. Valid range is -100 to 100. Specifying 0 centers the spring. Any values outside this range are silently clamped.\n\n\x09saturationPercentage: Specify the level of saturation of the spring force effect. The saturation stays constant after a certain deflection from the center of the spring. \n\x09It is comparable to a magnitude.  Valid ranges are 0 to 100. Any value higher than 100 is silently clamped. \n\n\x09""coefficientPercentage - Specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.  \n\x09Higher values mean that the saturation level is  reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n\x09\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Spring Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback spring" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the spring force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       offsetPercentage: Specifies the center of the spring force effect. Valid range is -100 to 100. Specifying 0 centers the spring. Any values outside this range are silently clamped.\n\n       saturationPercentage: Specify the level of saturation of the spring force effect. The saturation stays constant after a certain deflection from the center of the spring.\n       It is comparable to a magnitude.  Valid ranges are 0 to 100. Any value higher than 100 is silently clamped.\n\n       coefficientPercentage - Specify the slope of the effect strength increase relative to the amount of deflection from the center of the condition.\n       Higher values mean that the saturation level is  reached sooner.  Valid ranges are -100 to 100. Any value outside the valid range is silently clamped.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySpringForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlaySpringForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms
		{
			int32 index;
			int32 type;
			int32 magnitudePercentage;
			int32 period;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_magnitudePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_magnitudePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_period_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_period;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, type), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage = { "magnitudePercentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, magnitudePercentage), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period = { "period", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms, period), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_magnitudePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Plays the surface effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09type : Specifies the type of force effect. Can be one of the  following values:\n\x09\x09o LOGI_PERIODICTYPE_SINE\n\x09\x09o LOGI_PERIODICTYPE_SQUARE\n\x09\x09o LOGI_PERIODICTYPE_TRIANGLE\n\n\x09magnitudePercentage - Specifies the magnitude of the surface effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n\x09period - Specifies the period of the periodic force effect. The value is the duration for one full cycle of the periodic function measured in milliseconds. \n\x09""A good range of values for the period is  20 ms (sand) to 120 ms (wooden bridge or cobblestones). For a surface effect the period should not be any bigger than 150 ms.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Play Wheel Surface Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback surface" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Plays the surface effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       type : Specifies the type of force effect. Can be one of the  following values:\n               o LOGI_PERIODICTYPE_SINE\n               o LOGI_PERIODICTYPE_SQUARE\n               o LOGI_PERIODICTYPE_TRIANGLE\n\n       magnitudePercentage - Specifies the magnitude of the surface effect.  Valid ranges for magnitudePercentage are 0 to 100. Values higher than 100 are silently clamped.\n\n       period - Specifies the period of the periodic force effect. The value is the duration for one full cycle of the periodic function measured in milliseconds.\n       A good range of values for the period is  20 ms (sand) to 120 ms (wooden bridge or cobblestones). For a surface effect the period should not be any bigger than 150 ms.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelPlaySurfaceEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelPlaySurfaceEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics
	{
		struct LogitechBPLibrary_eventWheelSetOperatingRange_Parms
		{
			int32 index;
			int32 range;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_range;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelSetOperatingRange_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelSetOperatingRange_Parms, range), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelSetOperatingRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelSetOperatingRange_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Sets the operating range of the controller with the range parameter \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\x09\n\x09range : the operating range to be set\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Set Wheel Operating Range" },
		{ "Keywords", "LogitechBPLibrary wheel steering operating range" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Sets the operating range of the controller with the range parameter\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       range : the operating range to be set\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelSetOperatingRange", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelSetOperatingRange_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//shuts down the SDK and destroys the controller objects \n" },
		{ "DisplayName", "Shutdown Wheel" },
		{ "Keywords", "LogitechBPLibrary wheel steering shutdown" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "shuts down the SDK and destroys the controller objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the bumpy road effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Bumpy Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback bumpy road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the bumpy road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopBumpyRoadEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopBumpyRoadEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics
	{
		struct LogitechBPLibrary_eventWheelStopCarAirborne_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopCarAirborne_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopCarAirborne_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopCarAirborne_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the car airborne effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Car Airborne Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback airborne" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the car airborne effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopCarAirborne", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopCarAirborne_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopConstantForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopConstantForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopConstantForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopConstantForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the constant force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Constant Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback constant" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the constant force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopConstantForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopConstantForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopDamperForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopDamperForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopDamperForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopDamperForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the damper force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Damper Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback damper" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the damper force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopDamperForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopDamperForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the dirt road effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Dirt Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback dirt road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the dirt road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopDirtRoadEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopDirtRoadEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the slippery road effect.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Slippery Road Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback slippery road" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the slippery road effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSlipperyRoadEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopSlipperyRoadEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSoftstopForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSoftstopForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSoftstopForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSoftstopForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the soft stop force.\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Soft Stop Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback soft stop" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the soft stop force.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSoftstopForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopSoftstopForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSpringForce_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSpringForce_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSpringForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSpringForce_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the spring force\n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Spring Force" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback spring" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the spring force\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSpringForce", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopSpringForce_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics
	{
		struct LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms
		{
			int32 index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index_MetaData)) };
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "/*Stops the surface effect. \n\n\x09index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n\x09True if success, false otherwise.\n\x09*/" },
		{ "DisplayName", "Stop Wheel Surface Effect" },
		{ "Keywords", "LogitechBPLibrary wheel steering force feedback surface" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "Stops the surface effect.\n\n       index : index of the game controller.  Index 0 corresponds to the first game controller connected. Index 1 to the second game controller.\n\n       True if success, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelStopSurfaceEffect", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelStopSurfaceEffect_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics
	{
		struct LogitechBPLibrary_eventWheelUpdate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LogitechBPLibrary_eventWheelUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LogitechBPLibrary_eventWheelUpdate_Parms), &Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LogitechBPLibrary" },
		{ "Comment", "//The Wheel State is automatically updated every frame in LogitechWheelInputDevice.cpp\n" },
		{ "DisplayName", "Update Wheel State" },
		{ "Keywords", "LogitechBPLibrary wheel steering update state" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "The Wheel State is automatically updated every frame in LogitechWheelInputDevice.cpp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogitechBPLibrary, nullptr, "WheelUpdate", nullptr, nullptr, sizeof(LogitechBPLibrary_eventWheelUpdate_Parms), Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULogitechBPLibrary_NoRegister()
	{
		return ULogitechBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULogitechBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogitechBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LogitechWheelPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogitechBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonIsPressed, "WheelButtonIsPressed" }, // 1522580192
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonReleased, "WheelButtonReleased" }, // 3766840682
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelButtonTriggered, "WheelButtonTriggered" }, // 3120663073
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGenerateNonLinearValues, "WheelGenerateNonLinearValues" }, // 374666348
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetNonLinearValue, "WheelGetNonLinearValue" }, // 2370654
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetOperatingRange, "WheelGetOperatingRange" }, // 2325629975
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetShifterMode, "WheelGetShifterMode" }, // 2255376472
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelGetState, "WheelGetState" }, // 1134046358
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelHasForceFeedback, "WheelHasForceFeedback" }, // 2477590836
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelInit, "WheelInit" }, // 809697376
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsConnected, "WheelIsConnected" }, // 3795978082
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsDeviceConnected, "WheelIsDeviceConnected" }, // 625147918
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsManufacturerConnected, "WheelIsManufacturerConnected" }, // 3312264118
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsModelConnected, "WheelIsModelConnected" }, // 4020119053
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelIsPlaying, "WheelIsPlaying" }, // 2277723926
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayBumpyRoadEffect, "WheelPlayBumpyRoadEffect" }, // 2839119498
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayCarAirborne, "WheelPlayCarAirborne" }, // 1847039404
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayConstantForce, "WheelPlayConstantForce" }, // 2606624425
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDamperForce, "WheelPlayDamperForce" }, // 3370951731
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayDirtRoadEffect, "WheelPlayDirtRoadEffect" }, // 2953497669
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayFrontalCollisionForce, "WheelPlayFrontalCollisionForce" }, // 3095381855
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlayLeds, "WheelPlayLeds" }, // 2327505344
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySideCollisionForce, "WheelPlaySideCollisionForce" }, // 2691815547
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySlipperyRoadEffect, "WheelPlaySlipperyRoadEffect" }, // 1082479837
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySoftstopForce, "WheelPlaySoftstopForce" }, // 3494483122
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySpringForce, "WheelPlaySpringForce" }, // 1353616461
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelPlaySurfaceEffect, "WheelPlaySurfaceEffect" }, // 2735920134
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelSetOperatingRange, "WheelSetOperatingRange" }, // 3668599743
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelShutdown, "WheelShutdown" }, // 2275549549
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopBumpyRoadEffect, "WheelStopBumpyRoadEffect" }, // 1915766752
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopCarAirborne, "WheelStopCarAirborne" }, // 3668835024
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopConstantForce, "WheelStopConstantForce" }, // 3363345760
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDamperForce, "WheelStopDamperForce" }, // 1503427143
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopDirtRoadEffect, "WheelStopDirtRoadEffect" }, // 4042146626
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSlipperyRoadEffect, "WheelStopSlipperyRoadEffect" }, // 2906056779
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSoftstopForce, "WheelStopSoftstopForce" }, // 1245151443
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSpringForce, "WheelStopSpringForce" }, // 2923959314
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelStopSurfaceEffect, "WheelStopSurfaceEffect" }, // 2681873735
		{ &Z_Construct_UFunction_ULogitechBPLibrary_WheelUpdate, "WheelUpdate" }, // 4040506431
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogitechBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "LogitechBPLibrary.h" },
		{ "ModuleRelativePath", "Private/LogitechBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogitechBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogitechBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULogitechBPLibrary_Statics::ClassParams = {
		&ULogitechBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULogitechBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogitechBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogitechBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULogitechBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULogitechBPLibrary, 965691464);
	template<> LOGITECHWHEELPLUGIN_API UClass* StaticClass<ULogitechBPLibrary>()
	{
		return ULogitechBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogitechBPLibrary(Z_Construct_UClass_ULogitechBPLibrary, &ULogitechBPLibrary::StaticClass, TEXT("/Script/LogitechWheelPlugin"), TEXT("ULogitechBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogitechBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
