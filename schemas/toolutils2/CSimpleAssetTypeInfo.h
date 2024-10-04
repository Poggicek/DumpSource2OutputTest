class CSimpleAssetTypeInfo
{
	CUtlString m_FriendlyName;
	CUtlString m_Ext;
	CUtlString m_IconLg;
	CUtlString m_IconSm;
	CUtlVector< CUtlString > m_SuppressSubstrings;
	CUtlVector< CUtlString > m_AdditionalExtensions;
	CUtlVector< AssetEngineCommand_t > m_EngineCommands;
	CUtlVector< CUtlString > m_LimitToMods;
	CUtlVector< CUtlString > m_ExcludeFromMods;
	CUtlVector< CUtlString > m_HideForRetailMods;
	bool m_bHideTypeByDefault;
	bool m_bCannotBeShown;
	bool m_bIsNontrivialChildAssetType;
	bool m_bSuppressFullFingerprintCalculation;
	bool m_bIgnoreCompiledState;
	bool m_bContentFileIsText;
	bool m_bPrefersLivePreview;
	bool m_bPresentInGameTree;
	bool m_bShouldCompileErrorFallbackToDisk;
	bool m_bUnrecognizedReferencesAreErrors;
};
