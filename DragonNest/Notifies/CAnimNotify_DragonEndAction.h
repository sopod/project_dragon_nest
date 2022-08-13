#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "CAnimNotify_DragonEndAction.generated.h"

UCLASS()
class DRAGONNEST_API UCAnimNotify_DragonEndAction : public UAnimNotify
{
	GENERATED_BODY()

public:
	FString GetNotifyName_Implementation() const override;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
};
