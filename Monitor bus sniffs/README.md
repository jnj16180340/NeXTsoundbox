Taken with a crappy 24mHz clone logic analyzer.  

Big files have been `split`-ted into 40M chunks for convenient storage on github!  

To restore:  
`cat PREFIX* > PREFIX.logicdata`  
To split:  
`split -b 40M BIGFILE PREFIX`
