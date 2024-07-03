
std::random_device rd;
std::mt19937 gen(rd());
ll random(ll low, ll high)
{
    std::uniform_int_distribution<ll> dist(low, high);
    return dist(gen);
}
