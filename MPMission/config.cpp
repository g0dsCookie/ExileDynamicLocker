class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/

	// dynamicLockerLimit
	ExileClient_gui_lockerDialog_event_onDepositButtonClick = "Custom\dynamicLockerLimit\ExileClient_gui_lockerDialog_event_onDepositButtonClick.sqf";
	ExileClient_gui_lockerDialog_show = "Custom\dynamicLockerLimit\ExileClient_gui_lockerDialog_show.sqf";
	ExileClient_system_locker_network_lockerResponse = "Custom\dynamicLockerLimit\ExileClient_system_locker_network_lockerResponse.sqf";
	ExileServer_system_locker_network_lockerDepositRequest = "Custom\dynamicLockerLimit\ExileServer_system_locker_network_lockerDepositRequest.sqf";
};

class CfgLocker 
{
	numbersOnly = "0123456789";
	maxDeposit = 40000;

	multiplyer = 2; // the multiplyer to scale the maxDeposit value
};

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 20000;
		Level5 = 40000;
		Level6 = 80000;
		Level7 = 160000;
		Level8 = 300000;
		Level9 = 600000;
		Level10 = 1000000;
		//LevelN = N;
		// add as many levels you want!
	};
};