# Character Static Stack

[Dive Into Systems: Input and Output in C](https://diveintosystems.org/book/C2-C_depth/IO.html)


### Code Formatting
Apply the coding standards via:
* Windows: ```SHIFT + ALT + F```
* Mac: ```SHIFT + OPTION + F```
* Linux: ```CTRL + SHIFT + I```


Notes
* [Using expressions in the watch panel with LLDB](https://github.com/vadimcn/vscode-lldb/blob/master/MANUAL.md#native-expressions)
* [View pointer as array in debugger](https://github.com/microsoft/vscode-cpptools/issues/172#issuecomment-1281804128)
  *   For LLDB:
	  * `/nat *(int(*)[13])pIntArray`
  *   For GDB:
      * `*pIntArray@13` or  `*pIntArray@ARRAY_SIZE`
