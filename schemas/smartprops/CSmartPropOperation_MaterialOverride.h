class CSmartPropOperation_MaterialOverride : public CSmartPropOperation
{
	CSmartPropAttributeBool m_bClearCurrentOverrides;
	CUtlVector< CSmartPropMaterialReplacement > m_MaterialReplacements;
};
