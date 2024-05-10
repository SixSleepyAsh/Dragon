// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Projectile_Base.generated.h"

UCLASS()
class DRAGON_API ACPP_Projectile_Base : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPP_Projectile_Base();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "Projectile Settings", EditAnywhere, meta = (ExposeOnSpawn = "true"))
	float Speed;

	UPROPERTY(BlueprintReadWrite, Category = "Projectile Settings", EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", ExposeOnSpawn = "true"))
	float Gravity;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
