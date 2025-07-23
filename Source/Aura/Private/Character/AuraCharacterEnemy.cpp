// Copyright ccy 


#include "Character/AuraCharacterEnemy.h"
#include "Aura/Aura.h"
#include <AbilitySystem/AauraAbilitySystemComponent.h>
#include <AbilitySystem/AuraAttributeSet.h>

AAuraCharacterEnemy::AAuraCharacterEnemy()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySysteamComponent = CreateDefaultSubobject<UAauraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySysteamComponent->SetIsReplicated(true);
	AbilitySysteamComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

}

void AAuraCharacterEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAuraCharacterEnemy::UnhighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}

void AAuraCharacterEnemy::BeginPlay()
{
	Super::BeginPlay();

	AbilitySysteamComponent->InitAbilityActorInfo(this, this);
}
