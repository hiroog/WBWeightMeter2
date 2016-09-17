// 2016 Hiroyuki Ogasawara
// vim:ts=4 sw=4 noet:

#include	"BalanceBoardPluginPrivatePCH.h"
#include	"BalanceBoardFunction.h"




void	UBalanceBoardFunction::StartBalanceBoardCalibration()
{
	WBLibAPI::Calibration();
}


void	UBalanceBoardFunction::AddBalanceBoard()
{
	WBLibAPI::AddDevice();
}


void	UBalanceBoardFunction::GetBalanceBoardState( TEnumAsByte<EBalanceBoardState>& state )
{
	state= static_cast<EBalanceBoardState>( WBLibAPI::GetState() );
}



bool	UBalanceBoardFunction::UpdateBalanceBoard( float& weight, float& w0, float& w1, float& w2, float& w3, TEnumAsByte<EBalanceBoardState>& state )
{
	bool	result= WBLibAPI::Update();
	state= static_cast<EBalanceBoardState>( WBLibAPI::GetState() );

	if( result ){
		WBLibAPI::BalanceData	data;
		WBLibAPI::GetData( data );
		weight= data.Weight;
		w0= data.Point[0];
		w1= data.Point[1];
		w2= data.Point[2];
		w3= data.Point[3];
	}else{
		weight= 0.0f;
		w0= 0.0f;
		w1= 0.0f;
		w2= 0.0f;
		w3= 0.0f;
	}
	return	result;
}


