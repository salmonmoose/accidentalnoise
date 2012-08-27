#ifndef TARRAYS_H
#define TARRAYS_H
#include <vector>
#include <stdexcept>

template<class T> class TArray2D
{
    public:
    TArray2D() : m_width(0), m_height(0){}
    TArray2D(size_t width, size_t height) { resize(width,height);}
    ~TArray2D(){}

    size_t width(){return m_width;}
    size_t height(){return m_height;}

    void resize(size_t width, size_t height)
    {
        m_array.resize(width*height);
        m_width=width;
        m_height=height;
        for(size_t c=0; c<m_width*m_height; ++c) m_array[c]=T(0);
    }

    void set(size_t x, size_t y, T val)
    {
        if(x>=m_width || y>=m_height) throw(std::out_of_range("Array index out of range"));
        m_array[y*m_width+x]=val;
    }

    T get(size_t x, size_t y)
    {
        if(x>=m_width || y>=m_height) throw(std::out_of_range("Array index out of range"));
        return m_array[y*m_width+x];
    }

    TArray2D &operator=(const TArray2D<T> &v)
    {
        resize(v.width(), v.height());
        for(size_t c=0; c<m_width*m_height; ++c)
        {
            m_array[c]=v.m_array[c];
        }
        return *this;
    }

    TArray2D &operator=(const T& v)
    {
        for(size_t c=0; c<m_width*m_height; ++c) m_array[c]=v;
    }

    protected:
    size_t m_width, m_height;
    std::vector<T> m_array;

};

template<class T> class TArray3D
{
    public:
    TArray3D() : m_width(0), m_height(0), m_depth(0){}
    TArray3D(size_t width, size_t height, size_t depth) { resize(width,height,depth);}
    ~TArray3D(){}

    size_t width(){return m_width;}
    size_t height(){return m_height;}
    size_t depth(){return m_depth;}

    void resize(size_t width, size_t height, size_t depth)
    {
        m_array.resize(width*height*depth);
        m_width=width;
        m_height=height;
        m_depth=depth;
        for(size_t c=0; c<m_width*m_height*depth; ++c) m_array[c]=T(0);
    }

    void set(size_t x, size_t y, size_t z, T val)
    {
        if(x>=m_width || y>=m_height || z>=m_depth) throw(std::out_of_range("Array index out of range"));
        m_array[z*(m_width*m_height)+y*m_width+x]=val;
    }

    T get(size_t x, size_t y, size_t z)
    {
        if(x>=m_width || y>=m_height || z>=m_depth) throw(std::out_of_range("Array index out of range"));
        return m_array[z*(m_width*m_height)+y*m_width+x];
    }

    TArray3D &operator=(const TArray2D<T> &v)
    {
        resize(v.width(), v.height(), v.depth());
        for(size_t c=0; c<m_width*m_height*m_depth; ++c)
        {
            m_array[c]=v.m_array[c];
        }
        return *this;
    }

    TArray3D &operator=(const T& v)
    {
        for(size_t c=0; c<m_width*m_height*m_depth; ++c) m_array[c]=v;
    }

    protected:
    size_t m_width, m_height, m_depth;
    std::vector<T> m_array;

};

#endif
