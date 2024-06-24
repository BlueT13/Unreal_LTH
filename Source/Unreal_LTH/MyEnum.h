// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyEnum.generated.h"

UENUM(BlueprintType)
enum class ETPSPlayerAnimation : uint8
{
	Idle,
	Move,
	Attack,
};

UCLASS()
class UNREAL_LTH_API UMyEnum : public UObject
{
	GENERATED_BODY()
	
};
