class CSmartPropOperation_TraceToLine : public CSmartPropOperation_Trace
{
	CSmartPropAttributeVector m_EndPointA;
	CSmartPropAttributeCoordinateSpace m_EndPointSpaceA;
	CSmartPropAttributeVector m_EndPointB;
	CSmartPropAttributeCoordinateSpace m_EndPointSpaceB;
	CSmartPropAttributeBool m_bTraceAway;
	CSmartPropAttributeFloat m_flTraceLength;
};
