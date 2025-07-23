// Copyright ccy 

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraCharacterEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacterEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraCharacterEnemy();

	//IEnemyInterface
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;
	//end IEnemyInterface

	//UPROPERTY(BlueprintReadOnly)
	//bool bHighlighted = false;
protected:
	virtual void BeginPlay() override;

};
