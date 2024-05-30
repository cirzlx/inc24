### Progetto - Impianto Semaforico Comandato "ISC" '24 
[Tinkercad Link](https://www.tinkercad.com/embed/iNOsuIANVeJ-impianto-semaforico-comandato?sharecode=BYYFi-NiwnCylbl8-Ms6OVTqQSeHWvafKt0LLMzby90)

---
### Diagramma di Flusso

```mermaid
flowchart TD
    A[START] --- B(var
    R2: int, G3: int, V4: int
    R5: int, G6: int, V7: int) ---
    1[G6: 0, R2: 0
      V4: 1, R5: 1] -->
    2[V4: 0, G3: 1] ---
    3[G3: 0, R5: 0,
      V7: 1, R2: 1] ---
    4[V7: 0, G6: 1] --> 1
    
```