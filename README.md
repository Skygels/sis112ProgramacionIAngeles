# Programación I – UCB

Repositorio base para las **tareas y exámenes** de la materia Programación I.  
Cada estudiante debe clonar o hacer fork de este repositorio y trabajar en su propia copia.

---

## Datos del estudiante

Completar con tus datos:

- **Nombre: Angeles Muraña**  
- **Carrera: Ing. Sistemas**  
- **Correo institucional: angeles.murana@ucb.edu.bo**  
- **Grupo: 1S**  

---

## Organización de carpetas

El repositorio está organizado en dos lenguajes principales: **C** y **Python**.  
Dentro de cada uno hay dos carpetas: `tareas/` y `examen/`.

```bash
├── c/
│ ├── tareas/ # Tareas en C
│ └── examen/ # Exámenes en C
├── python/
│ ├── tareas/ # Tareas en Python
│ └── examen/ # Exámenes en Python
└── .github/workflows # Workflows de GitHub Actions (no modificar)
```

Cada tarea/examen debe ir en su propia subcarpeta, por ejemplo:

```bash
c/tareas/01_ejercicio/
python/tareas/01_ejercicio/
```

---

## GitHub Actions

Este repositorio incluye configuración para **GitHub Actions**, lo que permite:

- Compilar automáticamente los programas en **C** (usando `gcc`).  
- Ejecutar y probar automáticamente los programas en **Python** (usando `pytest`).  

Los resultados aparecen en la pestaña **Actions** de GitHub 


---

## Cómo empezar

1. Haz un **Fork** de este repositorio.  
2. Clona tu fork en tu computadora:  
   ```bash
   git clone https://github.com/<TU_USUARIO>/programacion1.git
   ```
3. Completa tus datos en este README.
4. Crea tus carpetas de ejercicios (01_ejercicio, 02_ejercicio, …).
5. Sube tus soluciones con git add, git commit y git push.
6. Revisa que los tests automáticos pasen en GitHub Actions.