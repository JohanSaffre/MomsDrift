// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogitechWheelPlugin/Public/ILogitechWheelPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILogitechWheelPlugin() {}
// Cross Module References
	LOGITECHWHEELPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceState();
	UPackage* Z_Construct_UPackage__Script_LogitechWheelPlugin();
// End Cross Module References
class UScriptStruct* FDeviceState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOGITECHWHEELPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDeviceState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceState, Z_Construct_UPackage__Script_LogitechWheelPlugin(), TEXT("DeviceState"), sizeof(FDeviceState), Get_Z_Construct_UScriptStruct_FDeviceState_Hash());
	}
	return Singleton;
}
template<> LOGITECHWHEELPLUGIN_API UScriptStruct* StaticStruct<FDeviceState>()
{
	return FDeviceState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDeviceState(FDeviceState::StaticStruct, TEXT("/Script/LogitechWheelPlugin"), TEXT("DeviceState"), false, nullptr, nullptr);
static struct FScriptStruct_LogitechWheelPlugin_StaticRegisterNativesFDeviceState
{
	FScriptStruct_LogitechWheelPlugin_StaticRegisterNativesFDeviceState()
	{
		UScriptStruct::DeferCppStructOps<FDeviceState>(FName(TEXT("DeviceState")));
	}
} ScriptStruct_LogitechWheelPlugin_StaticRegisterNativesFDeviceState;
	struct Z_Construct_UScriptStruct_FDeviceState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lRx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lRx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lRy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lRy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lRz_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lRz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rglSlider_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rglSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rglSlider;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rgdwPOV_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rgdwPOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rgdwPOV;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rgbButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rgbButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rgbButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lVX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lVX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lVY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lVY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lVZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lVZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lVRx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lVRx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lVRy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lVRy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lVRz_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lVRz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rglVSlider_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rglVSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rglVSlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lAX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lAX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lAY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lAY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lAZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lAZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lARx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lARx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lARy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lARy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lARz_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lARz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rglASlider_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rglASlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rglASlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lFY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lFY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lFZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lFZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lFRx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lFRx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lFRy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lFRy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lFRz_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lFRz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rglFSlider_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rglFSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rglFSlider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lX_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lX = { "lX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lY_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis position\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis position" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lY = { "lY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lZ_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis position\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis position" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lZ = { "lZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRx_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis position\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis position" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRx = { "lRx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lRx), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRy_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis rotation\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis rotation" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRy = { "lRy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lRy), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRz_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis rotation\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis rotation" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRz = { "lRz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lRz), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRz_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider_Inner = { "rglSlider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis rotation\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis rotation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider = { "rglSlider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, rglSlider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV_Inner = { "rgdwPOV", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* extra axes positions\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "extra axes positions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV = { "rgdwPOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, rgdwPOV), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons_Inner = { "rgbButtons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* POV directions. POV1 = Wheel Dpad\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "POV directions. POV1 = Wheel Dpad" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons = { "rgbButtons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, rgbButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVX_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* 128 buttons\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "128 buttons" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVX = { "lVX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lVX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVY_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis velocity\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis velocity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVY = { "lVY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lVY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVZ_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis velocity\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis velocity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVZ = { "lVZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lVZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRx_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis velocity\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis velocity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRx = { "lVRx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lVRx), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRy_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis angular velocity\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis angular velocity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRy = { "lVRy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lVRy), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRz_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis angular velocity\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis angular velocity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRz = { "lVRz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lVRz), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRz_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider_Inner = { "rglVSlider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis angular velocity\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis angular velocity" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider = { "rglVSlider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, rglVSlider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAX_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* extra axes velocities\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "extra axes velocities" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAX = { "lAX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lAX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAY_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis acceleration\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis acceleration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAY = { "lAY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lAY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAZ_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis acceleration\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis acceleration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAZ = { "lAZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lAZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARx_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis acceleration\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis acceleration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARx = { "lARx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lARx), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARy_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis angular acceleration\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis angular acceleration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARy = { "lARy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lARy), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARz_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis angular acceleration\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis angular acceleration" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARz = { "lARz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lARz), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARz_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider_Inner = { "rglASlider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis angular acceleration\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis angular acceleration" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider = { "rglASlider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, rglASlider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFX_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* extra axes accelerations\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "extra axes accelerations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFX = { "lFX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lFX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFY_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis force\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis force" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFY = { "lFY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lFY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFZ_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis force\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis force" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFZ = { "lFZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lFZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRx_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis force\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis force" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRx = { "lFRx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lFRx), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRy_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* x-axis torque\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "x-axis torque" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRy = { "lFRy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lFRy), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRz_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* y-axis torque\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "y-axis torque" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRz = { "lFRz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, lFRz), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRz_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider_Inner = { "rglFSlider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider_MetaData[] = {
		{ "Category", "Logitech Wheel Plugin" },
		{ "Comment", "/* z-axis torque\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Public/ILogitechWheelPlugin.h" },
		{ "ToolTip", "z-axis torque" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider = { "rglFSlider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDeviceState, rglFSlider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lRz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgdwPOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rgbButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lVRz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglVSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lAZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lARz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglASlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_lFRz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceState_Statics::NewProp_rglFSlider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LogitechWheelPlugin,
		nullptr,
		&NewStructOps,
		"DeviceState",
		sizeof(FDeviceState),
		alignof(FDeviceState),
		Z_Construct_UScriptStruct_FDeviceState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDeviceState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LogitechWheelPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DeviceState"), sizeof(FDeviceState), Get_Z_Construct_UScriptStruct_FDeviceState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDeviceState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDeviceState_Hash() { return 412919774U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
