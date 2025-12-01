# 📚 aed - hito 2 - proyecto suffix array

este repositorio corresponde al **hito 2** del curso de aed, donde se implementa y analiza la estructura de datos **suffix array**.

el trabajo continúa y mantiene la coherencia con el **hito 1** (informe teórico), en el que se presentan:

- 🧩 definiciones formales del suffix array y estructuras relacionadas
- 📖 motivación y contexto teórico
- ⚖️ ventajas, desventajas y casos de uso

## 🔧 contenido principal

- `suffix_array.cpp` ⚙️
  - implementación del suffix array **sin estructuras de la stl** (solo arreglos y funciones propias).
  - construcción del arreglo de sufijos a partir de un texto.
  - búsqueda de patrones mediante **búsqueda binaria** sobre el suffix array.
  - comentarios que explican cómo el código refleja la definición formal y las complejidades mencionadas en el informe del hito 1.

- carpeta `web/` 🌐
  - `index.html`: interfaz visual para **explorar el suffix array** paso a paso.
  - `style.css`: estilos con estética clara y didáctica.
  - `app.js`: lógica en javascript que implementa el suffix array y la búsqueda binaria.

## 🌟 características

- 🔡 muestra todos los sufijos y su orden lexicográfico.
- 📏 visualiza el **suffix array** como una permutación de posiciones.
- ⏱️ ilustra la búsqueda de patrones con complejidad aproximada **o(m log n)**.

## 👀 visualizador web

el visualizador permite:

- ✏️ ingresar un texto (por ejemplo `banana`).
- 📚 ver todos los sufijos generados y ordenados lexicográficamente.
- 🧱 observar el suffix array como arreglo de índices.
- 🔍 seguir paso a paso la **búsqueda binaria** de un patrón.

## 🚀 despliegue

la aplicación está desplegada en github pages:

🔗 [ver en vivo](maffzz.github.io/aed-project/)

## 🗂️ estructura del proyecto

```
.
├── suffix_array.cpp   # implementación en c++
└── web/
    ├── index.html     # interfaz de usuario
    ├── style.css      # estilos
    └── app.js         # lógica de la aplicación
```

## ✨ grupo 5

| nombre                                   | carrera | perfil de github                              |
|------------------------------------------|---------|-----------------------------------------------|
| martín jesús bonilla sarmiento 🧠        | cs      | [github](https://github.com/marbs23)         |
| annemarie alejandra saldarriaga núñez 💻 | cs      | [github](https://github.com/anniesld)        |
| maría fernanda lazón meza 📊             | ds      | [github](https://github.com/maffzz)          |
