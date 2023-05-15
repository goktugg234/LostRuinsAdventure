#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class APlayerStart;
#include "WB_DeathScreen__pf490277584.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Player/WB_DeathScreen.WB_DeathScreen_C", OverrideNativeName="WB_DeathScreen_C"))
class UWB_DeathScreen_C__pf490277584 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit", Category="WB_DeathScreen", OverrideNativeName="Exit"))
	UButton* bpv__Exit__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Restart", Category="WB_DeathScreen", OverrideNativeName="Restart"))
	UButton* bpv__Restart__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Spot", Category="Default", MultiLine="true", OverrideNativeName="Start Spot"))
	APlayerStart* bpv__StartxSpot__pfT;
	UWB_DeathScreen_C__pf490277584(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_WB_DeathScreen_0"))
	void bpf__ExecuteUbergraph_WB_DeathScreen__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WB_DeathScreen__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__WB_DeathScreen_Restart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__WB_DeathScreen_Restart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__WB_DeathScreen_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__WB_DeathScreen_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
