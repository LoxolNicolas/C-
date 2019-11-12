template<typename T>
Pile_Gen<T>::Pile_Gen(int capacite) : tab(nullptr), _taille(0), _capacite(capacite)
{
    if(capacite <= 0)
    {
        std::invalid_argument e("Capacite inferieur ou egal a 0");
        throw e;
    }

    tab = new T[capacite];
}

template<typename T>
Pile_Gen<T>::~Pile_Gen()
{
    delete[] tab;
}

template<typename T>
int Pile_Gen<T>::size() const
{
    return _taille;
}

template<typename T>
int Pile_Gen<T>::getCapacite() const
{
    return _capacite;
}

template<typename T>
bool Pile_Gen<T>::empty() const
{
    return (_taille == 0);
}

template<typename T>
void Pile_Gen<T>::push(const T& element)
{
    if(_taille < _capacite)
    {
        tab[_taille] = element;
        _taille++;
    } 
}

template<typename T>
void Pile_Gen<T>::pop()
{
    if(_taille <= 0)
    {
        std::invalid_argument e("Pile Vide");
        throw e;
    }

    _taille--;
}

template<typename T>
const T& Pile_Gen<T>::top() const
{
    return tab[_taille - 1];
}

template<typename T>
void Pile_Gen<T>::afficher() const
{
    for(int i = 0; i < _taille; i++)
    {
        std::cout << tab[i] << std::endl;
    }
}