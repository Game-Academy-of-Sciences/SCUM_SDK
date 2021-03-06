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

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InventorySecondIteration_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.OnDrop");

	UUI_InventorySecondIteration_C_OnDrop_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.PointerEvent = PointerEvent;
	fn_params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.InitFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIteration_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.InitFromItem");

	UUI_InventorySecondIteration_C_InitFromItem_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIteration_C::GetItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.GetItem");

	UUI_InventorySecondIteration_C_GetItem_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = fn_params.Item;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_InventorySecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.UpdateItemWidgetHighlightings");

	UUI_InventorySecondIteration_C_UpdateItemWidgetHighlightings_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.Blink
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_InventorySecondIteration_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.Blink");

	UUI_InventorySecondIteration_C_Blink_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.ExecuteUbergraph_UI_InventorySecondIteration
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIteration_C::ExecuteUbergraph_UI_InventorySecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.ExecuteUbergraph_UI_InventorySecondIteration");

	UUI_InventorySecondIteration_C_ExecuteUbergraph_UI_InventorySecondIteration_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
