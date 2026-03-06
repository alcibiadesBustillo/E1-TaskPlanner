# Examen Práctico - TaskList y Planificador de Tareas

## Descripción general

En este examen práctico, usted implementará una estructura de datos propia llamada `TaskList`, utilizando el manejo manual de memoria dinámica en C++.

Luego aplicará esa estructura para resolver un problema de planificación de tareas.

## Objetivos de aprendizaje

Este examen evalúa su comprensión de:

- clases y objetos
- arreglos dinámicos
- manejo de memoria
- constructor de copia, destructor y operador de asignación
- sobrecarga de operadores
- resolución de problemas con una estructura de datos propia

## Resumen del problema

Cada tarea tiene:

- un nombre
- una prioridad
- una duración
- un orden de inserción

Las tareas deben planificarse según las siguientes reglas:

1. Primero va la tarea con mayor prioridad
2. Si dos tareas tienen la misma prioridad, primero va la de menor duración
3. Si dos tareas tienen la misma prioridad y la misma duración, primero va la que fue insertada antes

## Archivos incluidos

- `Task.h`, `Task.cpp`
- `TaskList.h`, `TaskList.cpp`
- `planner.h`, `planner.cpp`

## Restricciones

**No puede usar:**

- `std::vector`
- `std::list`
- `std::deque`
- `std::priority_queue`
- `std::set`
- `std::map`
- ni ningún otro contenedor STL

**Sí puede usar:**

- `std::string`
- `iostream`
- `sstream`
- `stdexcept`
- y otras utilidades básicas de la biblioteca estándar

## Notas de implementación

Debe completar las secciones marcadas con `TODO` en:

- `Task.cpp`
- `TaskList.cpp`
- `planner.cpp`

No cambie:

- nombres de archivos
- nombres de clases
- firmas públicas de funciones

Puede crear su propio `main.cpp` localmente para probar su código, pero **no debe subirlo**.

Solamente se evaluarán los archivos `.h` y `.cpp` provistos en este repositorio.

## Comportamiento requerido

### `Task`
Debe validar los argumentos del constructor:

- `name` no puede estar vacío
- `priority` debe estar entre 1 y 10
- `duration` debe ser mayor que 0

Si algún valor es inválido, debe lanzar `std::invalid_argument`.

### `TaskList`
- La capacidad por defecto debe ser 4
- Si el arreglo se llena, la capacidad debe duplicarse
- Si al llamar `addTask` no hay espacio suficiente, su implementación debe redimensionar la estructura automáticamente antes de insertar la nueva tarea
- `peekNextTask()` y `removeNextTask()` sobre una lista vacía deben lanzar `std::underflow_error`
- Debe implementar correctamente copia profunda

### `buildSchedule`
Debe devolver un `string` con este formato exacto:

```text
1. Study - priority 9 - duration 30
2. Quiz - priority 9 - duration 45
3. Email - priority 7 - duration 10
