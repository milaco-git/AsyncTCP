* [33mca8ac5f[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m, [m[1;31morigin/master[m[33m, [m[1;31morigin/HEAD[m[33m)[m Fix LoadProhibited (#73)
* [33mcacac8f[m Make sure the closed slot is always freed (#68)
* [33md27a12a[m Fix assertion errors (#72)
* [33m6a54164[m Update install-arduino-ide.sh
* [33m03b7e35[m bump version
* [33m625784b[m Ci update (#70)
*   [33m512035d[m Merge pull request #67 from matt123p/fix-crash-on-fin-v2
[32m|[m[33m\[m  
[32m|[m *   [33mf6f5cb6[m Merge branch 'master' into fix-crash-on-fin-v2
[32m|[m [34m|[m[32m\[m  
[32m|[m [34m|[m[32m/[m  
[32m|[m[32m/[m[34m|[m   
* [34m|[m [33mb96c4fe[m Update README.md
* [34m|[m   [33mf3ed41a[m Merge pull request #66 from matt123p/fix-crash-on-fin-v2
[36m|[m[1;31m\[m [34m\[m  
[36m|[m [1;31m|[m * [33m6b855a8[m Merge branch 'master' into fix-crash-on-fin-v2
[36m|[m [1;31m|[m[1;31m/[m[1;33m|[m 
[36m|[m [1;31m|[m * [33m1a15dfd[m Add thread safety around choosing a closed_slot.
[36m|[m [1;31m|[m *   [33m86fa8c6[m Merge remote-tracking branch 'upstream/master'
[36m|[m [1;31m|[m [1;34m|[m[36m\[m  
[36m|[m [1;31m|[m[36m_[m[1;34m|[m[36m/[m  
[36m|[m[36m/[m[1;31m|[m [1;34m|[m   
[36m|[m [1;31m|[m *   [33m826c12e[m Merge branch 'fix-crash-on-fin-v2'
[36m|[m [1;31m|[m [1;36m|[m[31m\[m  
[36m|[m [1;31m|[m * [31m\[m   [33mb171a7b[m Merge branch 'fix-crash-on-fin-v2'
[36m|[m [1;31m|[m [32m|[m[33m\[m [31m\[m  
[36m|[m [1;31m|[m * [33m\[m [31m\[m   [33m08108c2[m Merge remote-tracking branch 'upstream/master'
[36m|[m [1;31m|[m [34m|[m[35m\[m [33m\[m [31m\[m  
[36m|[m * [34m|[m [35m\[m [33m\[m [31m\[m   [33m7d15cb4[m Merge branch 'master' into fix-crash-on-fin-v2
[36m|[m [31m|[m[36m\[m [34m\[m [35m\[m [33m\[m [31m\[m  
[36m|[m [31m|[m[36m/[m [34m/[m [35m/[m [33m/[m [31m/[m  
[36m|[m[36m/[m[31m|[m [34m|[m [35m|[m [33m|[m [31m/[m   
[36m|[m [31m|[m [34m|[m[31m_[m[35m|[m[31m_[m[33m|[m[31m/[m    
[36m|[m [31m|[m[31m/[m[34m|[m [35m|[m [33m|[m     
* [31m|[m [34m|[m [35m|[m [33m|[m [33m7ab3540[m Update README.md
[1;31m|[m * [34m|[m [35m|[m [33m|[m [33m13361c8[m Use the system defined parameter to set the size of the closed_slots buffer.
[1;31m|[m * [34m|[m [35m|[m [33m|[m   [33m19a5320[m Merge branch 'master' into fix-crash-on-fin-v2
[1;31m|[m [33m|[m[1;31m\[m [34m\[m [35m\[m [33m\[m  
[1;31m|[m [33m|[m[1;31m/[m [34m/[m [35m/[m [33m/[m  
[1;31m|[m[1;31m/[m[33m|[m [34m|[m [35m|[m [33m/[m   
[1;31m|[m [33m|[m [34m|[m[33m_[m[35m|[m[33m/[m    
[1;31m|[m [33m|[m[33m/[m[34m|[m [35m|[m     
* [33m|[m [34m|[m [35m|[m   [33m0f6a09c[m Merge pull request #59 from btittelbach/master
[1;34m|[m[1;35m\[m [33m\[m [34m\[m [35m\[m  
[1;34m|[m * [33m|[m [34m|[m [35m|[m [33m78a0cba[m Update AsyncTCP.cpp
[1;34m|[m * [33m|[m [34m|[m [35m|[m   [33mc16449b[m Merge branch 'master' into master
[1;34m|[m [1;36m|[m[1;34m\[m [33m\[m [34m\[m [35m\[m  
[1;34m|[m [1;36m|[m[1;34m/[m [33m/[m [34m/[m [35m/[m  
[1;34m|[m[1;34m/[m[1;36m|[m [33m|[m [34m|[m [35m|[m   
* [1;36m|[m [33m|[m [34m|[m [35m|[m   [33m5f107e7[m Merge pull request #65 from Mattel/feature/add-cmakelists
[35m|[m[33m\[m [1;36m\[m [33m\[m [34m\[m [35m\[m  
[35m|[m [33m|[m[35m_[m[1;36m|[m[35m_[m[33m|[m[35m_[m[34m|[m[35m/[m  
[35m|[m[35m/[m[33m|[m [1;36m|[m [33m|[m [34m|[m   
[35m|[m * [1;36m|[m [33m|[m [34m|[m [33m7089859[m Add CMakeLists.txt file for ESP-IDF
[35m|[m[35m/[m [1;36m/[m [33m/[m [34m/[m  
[35m|[m * [33m|[m [34m|[m [33mb548abc[m fix ESPAsyncWebServer/issues/265 in AsyncTCP as well
[35m|[m [33m|[m * [34m|[m [33m15356c3[m Fix closed_slots initialization.
[35m|[m [33m|[m * [34m|[m   [33m95d6a0a[m Merge remote-tracking branch 'upstream/master' into fix-crash-on-fin-v2
[35m|[m [33m|[m [34m|[m[35m\[m [34m\[m  
[35m|[m [33m|[m[35m_[m[34m|[m[35m/[m [34m/[m  
[35m|[m[35m/[m[33m|[m [34m|[m [34m/[m   
[35m|[m [33m|[m [34m|[m[34m/[m    
* [33m|[m [34m|[m   [33m4836720[m Merge pull request #61 from tve/fix_dns
[36m|[m[1;31m\[m [33m\[m [34m\[m  
[36m|[m * [33m\[m [34m\[m   [33m882ef82[m Merge branch 'master' into fix_dns
[36m|[m [1;32m|[m[36m\[m [33m\[m [34m\[m  
[36m|[m [1;32m|[m[36m/[m [33m/[m [34m/[m  
[36m|[m[36m/[m[1;32m|[m [33m|[m [34m|[m   
* [1;32m|[m [33m|[m [34m|[m   [33m091802a[m Merge pull request #64 from matt123p/fix-crash-on-fin
[1;34m|[m[1;35m\[m [1;32m\[m [33m\[m [34m\[m  
[1;34m|[m [1;35m|[m * [33m|[m [34m|[m [33m5e2d35e[m fix DNS not-found results
[1;34m|[m [1;35m|[m [1;35m|[m [33m|[m * [33m9a4a58a[m Allow for multiple close events.
[1;34m|[m [1;35m|[m [1;35m|[m[1;35m_[m[33m|[m[1;35m/[m  
[1;34m|[m [1;35m|[m[1;35m/[m[1;35m|[m [33m|[m   
[1;34m|[m * [1;35m|[m [33m|[m [33m911414e[m Revert "try to catch some edge cases between LwIP and Async tasks" and fix in a completely different way.
[1;34m|[m[1;34m/[m [1;35m/[m [33m/[m  
* [1;35m|[m [33m|[m [33mf8e97b4[m Create stale.yml
* [1;35m|[m [33m|[m   [33m94fb6f4[m Merge pull request #63 from me-no-dev/enable-ci
[1;36m|[m[31m\[m [1;35m\[m [33m\[m  
[1;36m|[m * [1;35m|[m [33m|[m [33mc1dcba4[m Trigger travis also
[1;36m|[m * [1;35m|[m [33m|[m [33mc5ca5ae[m Enable Github CI
[1;36m|[m[1;36m/[m [1;35m/[m [33m/[m  
* [1;35m|[m [33m|[m   [33m46a65b4[m Merge pull request #62 from me-no-dev/github-ci
[32m|[m[33m\[m [1;35m\[m [33m\[m  
[32m|[m * [1;35m|[m [33m|[m [33m861b3aa[m Update build scripts
[32m|[m[32m/[m [1;35m/[m [33m/[m  
* [1;35m|[m [33m/[m [33m6937856[m Update Travis build script (even if there are no examples)
[33m|[m [1;35m|[m[33m/[m  
[33m|[m[33m/[m[1;35m|[m   
* [1;35m|[m   [33m90715ae[m Merge pull request #50 from obrain17/master
[1;35m|[m[35m\[m [1;35m\[m  
[1;35m|[m [35m|[m[1;35m/[m  
[1;35m|[m[1;35m/[m[35m|[m   
[1;35m|[m * [33ma924420[m Fix Issue that connect() did not work with DNS
[1;35m|[m[1;35m/[m  
*   [33md1f28ff[m Merge pull request #46 from atanisoft/patch-1
[36m|[m[1;31m\[m  
[36m|[m * [33mf9e107c[m Update AsyncClient::errorToString for esp-lwip constants
[36m|[m[36m/[m  
* [33m1ad1280[m Code cleanup and restructure
* [33m4b20e84[m abort and close are called without client in the server code
* [33m4e7d1c3[m try to catch some edge cases between LwIP and Async tasks
* [33mb5c6167[m Give WDT to the people already
* [33m00d3009[m Enable WDT inside Arduino and PIO
* [33mcefd9e4[m Add options to select running core and to enable WDT for Async
* [33mff5c8b2[m Add proper travis script
* [33mc9df7cd[m Restyle and up lib version
* [33mf1a801f[m Attempt at fixing thenasty memory bug
* [33mac55171[m Update library.properties
* [33mb193beb[m Update library.json
*   [33m1656fed[m Merge pull request #32 from me-no-dev/idf-update
[1;32m|[m[1;33m\[m  
[1;32m|[m *   [33m0dfd5b6[m Merge pull request #30 from tantive/idf-update
[1;32m|[m [1;34m|[m[1;35m\[m  
[1;32m|[m [1;34m|[m * [33m29661a6[m Fixed "Guru Meditation Error: Core  1 panic'ed (LoadProhibited) . Exception was unhandled." (see https://github.com/espressif/esp-idf/issues/1467)
[1;32m|[m [1;34m|[m[1;34m/[m  
[1;32m|[m * [33m6fab772[m Add changes to make compile succeed with the latest IDF
* [1;35m|[m [33m952b7eb[m Update library.properties
* [1;35m|[m [33m03b8288[m Update library.json
* [1;35m|[m [33me1381d9[m Update library.properties
[1;35m|[m[1;35m/[m  
* [33m5453ec2[m improve stability a bit more
* [33m34a0320[m Connection close stability improvements
* [33m2f76a9f[m fix case where connection is already freed
* [33m42a3f3d[m Add support for single core mode
*   [33mf34763c[m Merge pull request #12 from copercini/master
[1;36m|[m[31m\[m  
[1;36m|[m * [33m69235b7[m Put the task in blocking mode when there is no items in queue
[1;36m|[m[1;36m/[m  
* [33m75e2b15[m Add option to handle pbufs instead of buffers
*   [33m4dbbf10[m Merge pull request #9 from ivankravets/patch-2
[32m|[m[33m\[m  
[32m|[m * [33mad72e65[m Check for compatible framework and dev/platform before build
[32m|[m[32m/[m  
* [33ma1a184a[m Do not go through API if already on LwIP thread
*   [33m9d6150e[m Merge pull request #3 from andig/stage
[34m|[m[35m\[m  
[34m|[m * [33m0d233e8[m Update library.json
[34m|[m[34m/[m  
*   [33mfd525d2[m Merge pull request #1 from ivankravets/patch-1
[36m|[m[1;31m\[m  
[36m|[m * [33m72c28a4[m Set compatibility only with Espressif 32
[36m|[m[36m/[m  
* [33maf729ac[m Initial Import
* [33m75900e3[m Initial commit
