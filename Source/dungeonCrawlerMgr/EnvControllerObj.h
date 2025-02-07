#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <GameFramework/PlayerStart.h>
#include "EnvControllerObj.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONCRAWLERMGR_API UEnvControllerObj : public UActorComponent
{
	GENERATED_BODY()

public:	
	static APlayerStart* PlayerStart;
	static int32 BestScore;
	static int32 CurrentGenerationType;
	static int32 MaxHealthPoints;
	static int32 CurrentHealthPoints;
	static int32 CurrentScore;
	static int32 CurrentLevel;
	static bool GameOver;

	static int32 DefaultEnemyHealthPoints;
	static int32 DefaultTreasureAmount;
	static int32 DefaultEnemySlayingReward;

	static int32 DefaultPlayerDamage;
	static int32 DefaultEnemyDamage;
	static int32 DefaultTrapDamage;

	static int32 CurrentMazeType;
	static int32 CurrentEnemiesNr;
	static int32 CurrentTreasuresNr;

	static int32 CurrentDefaultLevelNr;

	static enum TileType
	{
		EmptyTile,
		WallTile,
		PlayerStartTile,
		PlayerEndTile,
		EnemyTile,
		TreasureTile,
		TrapTile
	};

	static enum GenerationType 
	{
		RL,
		LLM,
		VAE,
		//GAN,
		DefaultMap
	};

	static enum MazeType
	{
		Braid,
		Perfect,
		None
	};

	UEnvControllerObj();

	static void SetBestScore(int32 value);
};
