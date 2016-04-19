Taken with a crappy 24mHz clone logic analyzer.  

Big files have been `split`-ted into 40M chunks for convenient storage on github!  

To restore:  
`cat PREFIX* > PREFIX.logicdata`  
To split:  
`split -b 40M BIGFILE PREFIX`

NB these need to be converted into VCD format using Logic. Ditching the clock signal cuts down sizes by lots.  

VCD files usually only contain MOCI data, unless it's specifically for other stuff (MICO queries, etc.).  

### THE NeXT Monitor Bus Protocol
## part of it, anyway

5mHz, 41 bytes per packet  

Summary: Will happen eventually. In the meantime, some examples can be found in `protocols/protocol-data.md` and in `protocols/*.png`