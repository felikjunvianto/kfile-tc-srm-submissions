+------------------+
| TesterDream BETA | : a TopCoder Arena plugin by fushar
+------------------+

Thank you for downloading this plugin!

This is a testing plugin for TopCoder Arena which extract the example testcases 
to your source code, so when you run your solution, it will be tested against 
the example testcases. It currently only supports GCC's C++.

FEATURES
1. Your program is tested against sample testcases with only one click.
2. Each testcase is run on different process, so you don't need to clear global 
   variables between testcases.
3. doubles and vector<double>s in return values are compared according to 
   TopCoder's rule.
4. The result of each testcase is one of the following:
   * Accepted
   * Wrong Answer
   * Time Limit Exceeded
   * Runtime Error
5. All testcases are guaranteed to be performed, even when your program crashes 
   in some testcases.
6. After all testcases are completed, you can view the points if you submit
   your program.
   
SCREENSHOT
+--------------------------------------------+
| Running example tests....                  |
|                                            | 
| #0: Accepted                               |
| #1: Wrong Answer                           |
|                 Expected: { "foo", "bar" } |
|                 Received: { "bar", "foo" } |
| #2: Time Limit Exceeded                    |
| #3: Runtime Error                          | 
|                                            |
| Submission is worth 247.25 points.         |
+--------------------------------------------+

INSTALLATION
1.  Download and extract the TesterDream plugin.
2.  Launch TopCoder Arena and login.
3.  Go to Options->Editor.
4.  Click Add.
5.  Type "FileEdit" in the Name box and "fileedit.EntryPoint" in the 
    EntryPoint box.
6.  In the ClassPath box, browse the "FileEdit.jar" file in the directory
    you extracted the plugin.
7.  Click OK.
8.  Highlight FileEdit and click Configure.
9.  Go to Code Template tab. Make sure your default programming language is C++, 
    if not, go to Options->Setup User Preferences, go to Editors tab and select 
    C++ in Default Language.
10. Insert this code at the very bottom of your template.

    // BEGIN CUT HERE
    $TESTCODE$
    // END CUT HERE

11. Click Save and then Close.
12. Click Add again.
13. Type "CodeProcessor" in the Name box and "codeprocessor.EntryPoint" in the 
    EntryPoint box.
14. In the ClassPath box, browse "FileEdit.jar", and then "CodeProcessor.jar",
    and then "TesterDream.jar".
15. Click OK.
16. Highlight CodeProcessor and click Configure.
17. Type "fileedit.EntryPoint" in the Editor EntryPoint box, and 
    "fushar.TesterDream" in the Processor Class box.
18. Click Verify and make sure you don't get any error messages. Click OK.
19. Select CodeProcessor as the Default editor.
20. Click Save and then Close.
21. Enjoy!



~ fushar ~
