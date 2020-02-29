#include "../matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main()
{
    plt::rc("figure", {{"dpi", "300"}, {"figsize", "8, 5"}});
    plt::plot({1,3,2,4});
    plt::save("dip_300_10_5.png");
    plt::show();  // must call a show(true), otherwise no work

    plt::rc("figure", {{"dpi", "100"}, {"figsize", "4, 2"}});
    plt::plot({1,3,2,4,5});
    plt::save("dip_100_4_2.png");
    plt::show();
}
