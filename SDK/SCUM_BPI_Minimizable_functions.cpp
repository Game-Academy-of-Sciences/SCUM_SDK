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

// Function BPI_Minimizable.BPI_Minimizable_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Minimizable_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Minimizable.BPI_Minimizable_C.OnMinimize");

	UBPI_Minimizable_C_OnMinimize_Params fn_params;
	fn_params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
