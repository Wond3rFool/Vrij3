#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommonClass.generated.h"

UCLASS()
class VRIJIII_API ACommonClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACommonClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
