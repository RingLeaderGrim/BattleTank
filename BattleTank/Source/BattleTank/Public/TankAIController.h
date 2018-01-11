// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

protected:

	//How close can the ai tank get
	UPROPERTY(EditAnywhere, Category = "Setup")//Consider EditDefaultsOnly
	float AcceptanceRadius = 3000;

private:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetPawn(APawn*  InPawn) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnPossedTankDeath();
};
