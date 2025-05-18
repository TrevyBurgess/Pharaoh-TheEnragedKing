// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheEnragedKing/TheEnragedKingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheEnragedKingGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THEENRAGEDKING_API UClass* Z_Construct_UClass_ATheEnragedKingGameMode();
THEENRAGEDKING_API UClass* Z_Construct_UClass_ATheEnragedKingGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheEnragedKing();
// End Cross Module References

// Begin Class ATheEnragedKingGameMode
void ATheEnragedKingGameMode::StaticRegisterNativesATheEnragedKingGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheEnragedKingGameMode);
UClass* Z_Construct_UClass_ATheEnragedKingGameMode_NoRegister()
{
	return ATheEnragedKingGameMode::StaticClass();
}
struct Z_Construct_UClass_ATheEnragedKingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheEnragedKingGameMode.h" },
		{ "ModuleRelativePath", "TheEnragedKingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheEnragedKingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATheEnragedKingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TheEnragedKing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheEnragedKingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheEnragedKingGameMode_Statics::ClassParams = {
	&ATheEnragedKingGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheEnragedKingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheEnragedKingGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATheEnragedKingGameMode()
{
	if (!Z_Registration_Info_UClass_ATheEnragedKingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheEnragedKingGameMode.OuterSingleton, Z_Construct_UClass_ATheEnragedKingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATheEnragedKingGameMode.OuterSingleton;
}
template<> THEENRAGEDKING_API UClass* StaticClass<ATheEnragedKingGameMode>()
{
	return ATheEnragedKingGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATheEnragedKingGameMode);
ATheEnragedKingGameMode::~ATheEnragedKingGameMode() {}
// End Class ATheEnragedKingGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_GitHub_Pharaoh_TheEnragedKing_TheEnragedKing_Source_TheEnragedKing_TheEnragedKingGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATheEnragedKingGameMode, ATheEnragedKingGameMode::StaticClass, TEXT("ATheEnragedKingGameMode"), &Z_Registration_Info_UClass_ATheEnragedKingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheEnragedKingGameMode), 3854366124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_GitHub_Pharaoh_TheEnragedKing_TheEnragedKing_Source_TheEnragedKing_TheEnragedKingGameMode_h_1630259107(TEXT("/Script/TheEnragedKing"),
	Z_CompiledInDeferFile_FID_Dev_GitHub_Pharaoh_TheEnragedKing_TheEnragedKing_Source_TheEnragedKing_TheEnragedKingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_GitHub_Pharaoh_TheEnragedKing_TheEnragedKing_Source_TheEnragedKing_TheEnragedKingGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
