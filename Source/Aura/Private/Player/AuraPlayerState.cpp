// Copyright ccy 


#include "Player/AuraPlayerState.h"
#include <AbilitySystem/AauraAbilitySystemComponent.h>
#include <AbilitySystem/AuraAttributeSet.h>

AAuraPlayerState::AAuraPlayerState()
{
	AbilitySysteamComponent = CreateDefaultSubobject<UAauraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySysteamComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("ttributeSet");

	NetUpdateFrequency = 100.0f; // Set the update frequency to 1 second
	//SetNetUpdateFrequency(100.f)


}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySysteamComponent;
}
