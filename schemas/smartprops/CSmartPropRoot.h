class CSmartPropRoot
{
	int32 m_nContentVersion;
	CSmartPropAttributeInt m_nMaxDepth;
	CUtlVector< CSmartPropVariable* > m_Variables;
	CUtlVector< CSmartPropChoice* > m_Choices;
	CUtlVector< CSmartPropElement* > m_Children;
	CUtlVector< CSmartPropModifier* > m_Modifiers;
};
