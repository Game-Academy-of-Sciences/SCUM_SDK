// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CraftingInfo_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties");

	UUI_CraftingInfo_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CraftingInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Construct");

	UUI_CraftingInfo_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CraftingInfo_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.Init
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItem**                  itemCDO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfo_C::Init(class AItem** itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Init");

	UUI_CraftingInfo_C_Init_Params fn_params;
	fn_params.itemCDO = itemCDO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingInfo_C::ExecuteUbergraph_UI_CraftingInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo");

	UUI_CraftingInfo_C_ExecuteUbergraph_UI_CraftingInfo_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
