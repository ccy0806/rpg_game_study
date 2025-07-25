// Copyright ccy 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AuraPlayerState.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;
/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AAuraPlayerState();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const {
		return AttributeSet;
	}

protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySysteamComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
