#include "CommonClass.h"


// Sets default values
ACommonClass::ACommonClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACommonClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACommonClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


