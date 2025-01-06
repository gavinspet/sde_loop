  +-------------------+        +----------------+       +-----------------+
  |                   |        |                |       |                 |
  |   Developer      |        |   Preprocessor |       |   Compiler      |
  |   (Write Code)   |        |                |       |                 |
  |                   |        |                |       |                 |
  +-------------------+        +----------------+       +-----------------+
            |                        |                          |
            |                        |                          |
            |     Source Code        |   Preprocessed Code      |   Object Code
            |----------------------->|------------------------->|
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |    +-------------------+                          |
            |    |                                              |
            |    |                                              |
            |    |                 Linker                       |
            |    |                                              |
            |    |                                              |
            |    +-------------------+                          |
            |                        |                          |
            |                        |                          |
            |     Executable File   |                          |
            |----------------------->|                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |    +-------------------+                          |
            |    |                                              |
            |    |                                              |
            |    |                 Operating System             |
            |    |                                              |
            |    |                                              |
            |    +-------------------+                          |
            |                        |                          |
            |                        |                          |
            |     Load Executable   |                          |
            |----------------------->|                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |                        |                          |
            |    +-------------------+                          |
            |    |                                              |
            |    |                                              |
            |    |                 Execute Program             |
            |    |                                              |
            |    |                                              |
            |    +-------------------+                          |
            |                        |                          |
            |                        |                          |
            |     Output / Errors   |                          |
            |<-----------------------|                          |
            |                        |                          |
            |                        |                          |
  +-------------------+        +----------------+       +-----------------+
  |                   |        |                |       |                 |
  |   Developer      |        |   Preprocessor |       |   Compiler      |
  |   (Write Code)   |        |                |       |                 |
  |                   |        |                |       |                 |
  +-------------------+        +----------------+       +-----------------+