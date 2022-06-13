//
// Created by beloin on 13/06/2022.
//

#include "Adapters/ViaSulSourceAdapter.h"
#include "Adapters/CometaSourceAdapter.h"
#include "Adapters/PaodeAcucarSourceAdapter.h"

int main () {
    SearchAdapter adapter1 = new ViaSulSourceAdapter();
    SearchAdapter adapter2 = new CometaSourceAdapter();
    SearchAdapter adapter3 = new PaodeAcucarSourceAdapter();
    SearchAdapter adapter4 = new ViaSulSourceAdapter();

    return 0;
}