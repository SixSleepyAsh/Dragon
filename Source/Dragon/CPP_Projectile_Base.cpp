// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Projectile_Base.h"

// Sets default values
ACPP_Projectile_Base::ACPP_Projectile_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Projectile_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Projectile_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

