// AddPartition.cpp : implementation file
//

#include "WIIScrubber.h"
#include "AddPartition.h"
	
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;

#endif	/* 
	
/////////////////////////////////////////////////////////////////////////////
// CAddPartition dialog
	
:CDialog (CAddPartition::IDD, pParent) 
{
	
		//{{AFX_DATA_INIT(CAddPartition)
		m_csPARTITIONSIZE = _T ("");
	
	
	
	
		//}}AFX_DATA_INIT
} 
{
	
	
		//{{AFX_DATA_MAP(CAddPartition)
		DDX_Text (pDX, IDC_PARTITIONSIZE, m_csPARTITIONSIZE);
	
	
	
	
	
		//}}AFX_DATA_MAP
} 
	//{{AFX_MSG_MAP(CAddPartition)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP () 
/////////////////////////////////////////////////////////////////////////////
// CAddPartition message handlers
     
{
	
	
		// convert length string to numeric
		if (0 ==
		    sscanf (m_csPARTITIONSIZE, "%I64X", &m_nPartitionSize))
		
		
			// no parse
			AfxMessageBox
			("Error: wrong format for partition size");
		
		
	
		// now round size upto nearest 32k
		if (0 != (m_nPartitionSize % 0x8000))
		
		
		
	
		
		
		
		
	
		// check string size
		if (6 != m_csPARTITIONNAME.GetLength ())
		
		
		
		
	
		// check for alphanumerics
		for (int i = 0; i < 6; i++)
		
		
			
			
				("Error: all characters of name must be alphanumeric");
			
			
		
	


{
	
	
	
	

{
	


{
	


{
	
	
		
		
		

