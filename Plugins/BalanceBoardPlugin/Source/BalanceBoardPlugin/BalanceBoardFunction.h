// 2016 Hiroyuki Ogasawara
// vim:ts=4 sw=4 noet:

#pragma	once

#include	"BalanceBoardFunction.generated.h"


UENUM(BlueprintType, Category="BalanceBoard")
enum EBalanceBoardState {
	STATE_BUSY,
	STATE_DEVICE_NOT_FOUND,
	STATE_CALIBRATION,
	STATE_READY,
	STATE_ADD_DEVICE,
	STATE_WAIT_DEVICE,
};



UCLASS(Category="BalanceBoard")
class UBalanceBoardFunction : public UObject {
	GENERATED_BODY()
public:

	/**
		Start bluetooth pairing
	*/
	UFUNCTION(BlueprintCallable,Category="BalanceBoard")
	static void		AddBalanceBoard();

	/**
		Start calibration
	*/
	UFUNCTION(BlueprintCallable,Category="BalanceBoard")
	static void		StartBalanceBoardCalibration();

	/**
		State
	*/
	UFUNCTION(BlueprintCallable,Category="BalanceBoard")
	static void	GetBalanceBoardState( TEnumAsByte<EBalanceBoardState>& state );

	/**
		Update
	*/
	UFUNCTION(BlueprintCallable,Category="BalanceBoard")
	static bool		UpdateBalanceBoard( float& weight, float& w0, float& w1, float& w2, float& w3, TEnumAsByte<EBalanceBoardState>& state );

};


