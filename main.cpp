#include <string>
#include <vector>

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

void vector_max() {
    std::vector<int> values;
    values.push_back(11);
    values.push_back(29);
    values.push_back(7);
    int best = values[0];
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i] > best) best = values[i];
    }
    (void)best;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

extern "C" int subtle_marble();
extern void golden_willow();
extern void placid_lantern();
extern void serene_kite();
extern void still_thicket();

int main() {
    half_value();
    vector_reverse();
    vector_max();
    count_spaces();
    golden_willow();
    placid_lantern();
    serene_kite();
    still_thicket();
    return subtle_marble();
}
