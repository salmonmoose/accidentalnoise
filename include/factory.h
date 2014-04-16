#ifndef FACTORY_H
#define FACTORY_H

#include <map>
#include <vector>
#include <functional>

template <typename T>

T* newT()
{
    return new T();
}

template <typename Key, typename Abstraction>

struct generic_factory
{
    typedef std::function<Abstraction*()> creator_t;

    Abstraction* build_object(Key const& key)
    {
        auto fit = creators.find(key);

        if (fit == creators.end())
        {
            printf("Noise Creator Not Found: %s\n", key.c_str());
            return 0;
        }

        return fit->second();
    }

    bool register_creator(Key const& key, creator_t const& creator) {
        creators[key] = creator;
        return true;
    }

    template <typename T>
    bool register_type(Key const& key) {
        register_creator(key, newT<T>);
        return true;
    }

    std::vector<Key> get_keys()
    {
        std::vector<Key> key_list;

        for(typename std::map<Key, creator_t>::iterator it = creators.begin(); it != creators.end(); ++it)
        {
            key_list.push_back(it->first);
        }

        return key_list;
    }

private:
    std::map<Key, creator_t> creators;
};
#endif