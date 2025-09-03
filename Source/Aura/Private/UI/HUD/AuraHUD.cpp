// Copyright ccy 


#include "UI/HUD/AuraHUD.h"

#include "UI/Widget/AuraUserWidget.h"

//UOverlayWidgetController* UOverlayWidgetController(const FWidgetControllerParams& WCParams)
//{
//	if (OverlayWidgetController == nullptr)
//	{
//		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
//		OverlayWidgetController->SetWidgetControllerParams(WCParams);
//		return OverlayWidgetController;
//	}
//	return OverlayWidgetController;
//}

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}
