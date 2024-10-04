class CPointValueRemapper : public CBaseEntity
{
	bool m_bDisabled;
	bool m_bUpdateOnClient;
	ValueRemapperInputType_t m_nInputType;
	CUtlSymbolLarge m_iszRemapLineStartName;
	CUtlSymbolLarge m_iszRemapLineEndName;
	CHandle< CBaseEntity > m_hRemapLineStart;
	CHandle< CBaseEntity > m_hRemapLineEnd;
	float32 m_flMaximumChangePerSecond;
	float32 m_flDisengageDistance;
	float32 m_flEngageDistance;
	bool m_bRequiresUseKey;
	ValueRemapperOutputType_t m_nOutputType;
	CUtlSymbolLarge m_iszOutputEntityName;
	CUtlSymbolLarge m_iszOutputEntity2Name;
	CUtlSymbolLarge m_iszOutputEntity3Name;
	CUtlSymbolLarge m_iszOutputEntity4Name;
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities;
	ValueRemapperHapticsType_t m_nHapticsType;
	ValueRemapperMomentumType_t m_nMomentumType;
	float32 m_flMomentumModifier;
	float32 m_flSnapValue;
	float32 m_flCurrentMomentum;
	ValueRemapperRatchetType_t m_nRatchetType;
	float32 m_flRatchetOffset;
	float32 m_flInputOffset;
	bool m_bEngaged;
	bool m_bFirstUpdate;
	float32 m_flPreviousValue;
	GameTime_t m_flPreviousUpdateTickTime;
	Vector m_vecPreviousTestPoint;
	CHandle< CBasePlayerPawn > m_hUsingPlayer;
	float32 m_flCustomOutputValue;
	CUtlSymbolLarge m_iszSoundEngage;
	CUtlSymbolLarge m_iszSoundDisengage;
	CUtlSymbolLarge m_iszSoundReachedValueZero;
	CUtlSymbolLarge m_iszSoundReachedValueOne;
	CUtlSymbolLarge m_iszSoundMovingLoop;
	CEntityOutputTemplate< float32 > m_Position;
	CEntityOutputTemplate< float32 > m_PositionDelta;
	CEntityIOOutput m_OnReachedValueZero;
	CEntityIOOutput m_OnReachedValueOne;
	CEntityIOOutput m_OnReachedValueCustom;
	CEntityIOOutput m_OnEngage;
	CEntityIOOutput m_OnDisengage;
};
