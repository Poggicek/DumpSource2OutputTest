class CSmartPropElement
{
	int32 m_nElementID;
	CSmartPropAttributeBool m_bEnabled;
	CUtlVector< CSmartPropSelectionCriteria* > m_SelectionCriteria;
	CUtlVector< CSmartPropModifier* > m_Modifiers;
};
