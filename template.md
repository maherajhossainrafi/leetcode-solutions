# Documentation Template

## The Template

Follow the structure below for every problem write-up.

````markdown
# <Problem Title>: Solution Summary

## 1. Problem Title

**<Problem Title>** (<Platform> <ID>, <Language>) · [Problem link](<url>)

## 2. Problem Summary

<!-- Paraphrase the statement in your own words. Do not paste it. -->
You are given <input, with its name and size>. Return <output> where:

- <rule 1>
- <rule 2>

In short: <one plain sentence>. Example: `<input>` becomes `<output>`. <Platform> guarantees `<constraints>`.

## 3. Intuition

<!-- Start with an everyday analogy, then the key insight, then a small trace. -->
Picture <everyday analogy>. <Key insight: why the solution works>.

| Step | What happens | State afterward |
|------|--------------|-----------------|
| start | | `<initial state>` |
| 1 | <action> | `<state>` |
| 2 | <action> | `<state>` |

## 4. Approaches

<!-- Number the approaches 1, 2, 3 ... and keep these numbers in every later section. -->
1. **<Name>:** <idea in one or two sentences>.
2. **<Name>:** <idea in one or two sentences>.
3. **<Name>:** <idea in one or two sentences>.

## 5. Complexity Analysis

| Approach | Time | Space (total, with output) | Extra space (without output) |
|----------|------|----------------------------|------------------------------|
| 1. <Name> | `O(...)` | `O(...)` | `O(...)` |
| 2. <Name> | `O(...)` | `O(...)` | `O(...)` |
| 3. <Name> | `O(...)` | `O(...)` | `O(...)` |

- **Why `O(...)`:** <the loop or recursion that causes it, in one sentence>.
- **Hidden cost:** <anything easy to miss, or delete this bullet>.
- **Lower bound:** <why no solution can do better, or delete this bullet>.
- Always state both space numbers: *`O(...)` counting the output, `O(...)` extra excluding it.*

## 6. Edge Cases

- <Smallest input>: <result and why>.
- <Duplicates or ties>: <result and why>.
- <Largest input>: <what to check, such as the highest index touched>.
- <Empty or invalid input>: <result, or note that the constraints exclude it>.

## 7. Implementations

**Approach <N> (recommended):**

```<language>
<code>
```

**Approach <M>:**

```<language>
<code>
```

## 8. Improvements

- **<Change>:** <what it improves and why>.
- <State honestly if the Big-O cannot be improved>.

**Ranking:** approach <a>, then approach <b>, then approach <c>.

## 9. Mistakes

- **<Mistake>.** <Why it fails and how to avoid it>.

## 10. Learnings

- <A reusable lesson, phrased so it helps on the next problem>.
````

---

## What Goes in Each Section

Use this table to see what belongs in each section and what to avoid.

| Section | Write | Avoid |
|---------|-------|-------|
| **1. Problem Title** | Exact problem name, platform, ID, language, and a link | Renaming the problem |
| **2. Problem Summary** | Input, output, and rules in your own words. One "In short" sentence, one example, the constraints | Pasting the platform's statement |
| **3. Intuition** | An everyday analogy, the key insight, and a small trace table | Jumping to code before the idea is clear |
| **4. Approaches** | A numbered list, one or two lines each, no code | Mixing in complexity or code |
| **5. Complexity Analysis** | The table, plus the reason for each result | Giving a Big-O with no reason, or only one space number |
| **6. Edge Cases** | The smallest, largest, duplicate, and empty inputs, each with its result | A generic list that ignores this problem |
| **7. Implementations** | Working code, recommended approach first | Untested code, or more than three blocks |
| **8. Improvements** | What can be tidied or sped up, and a ranking | Claiming a Big-O gain that does not exist |
| **9. Mistakes** | Real pitfalls: ones you hit or ones reviewers commonly see | Vague advice like "be careful" |
| **10. Learnings** | Lessons that transfer to other problems | Repeating the solution |